#include<stdio.h>
#include<string.h>
int main()
{   
    int number;
    typedef struct Student{
        char name[20];
        int age;
        float cgpa;
    }STRUCTURE;

    printf("Enter How Many Student Details you Want = ");
    scanf("%d",&number);

    STRUCTURE student[number];

    int length = sizeof(student) / sizeof(student[0]);

    for(int i = 0; i<length; i++){
        printf("Enter Student %d Details =  \n",i+1);

        printf("Enter name :- ");
        // gets(student[i].name);
        gets(student[i].name);

        printf("Enter age :- ");
        scanf("%d",&student[i].age);

        printf("Enter cgpa :- ");
        scanf("%f",&student[i].cgpa);
    }

    // Printing The Structure Value 

    for(int i = 0; i<length; i++){
        printf("Student %d Details :- \n",i+1);
        printf("Name = %s",student[i].name);
        printf("Age = %d",student[i].age);
        printf("CGPA = %f",student[i].cgpa);
    }


    return 0;
}
