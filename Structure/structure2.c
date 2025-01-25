#include<stdio.h>
#include<string.h>
typedef struct Student
{
    char name[50];
    int roll;
    float cgpa;
} STRUCTURE;


int main(){
    int numberofstudent , lengthofarray;

    printf("Enter How many Student Data you want to add :- ");
    scanf("%d",&numberofstudent);
    STRUCTURE array[numberofstudent];

    lengthofarray = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i<lengthofarray; i++){

        printf("Enter the Details of Student -- %d\n",i + 1);

        printf("Enter Student name :- \n");
        scanf("%s",&array[i].name);
        // gets(array[i].name);
        printf("Enter Roll no :- \n");
        scanf("%d",&array[i].roll);
        printf("Enter Cgpa :- \n");
        scanf("%f",&array[i].cgpa);
    }

    for(int i = 0; i<lengthofarray; i++){
        printf("Details of Student %d -- \n",i+1);
            
        printf("\tName : %s\n",array[i].name);
        printf("\tRoll No : %d\n",array[i].roll);
        printf("\tCGPA : %.2f\n",array[i].cgpa);


        // detailsofstudent(array[i]);
    }

    return 0;
}