#include <stdio.h>
#include <string.h>
typedef struct Student
{

    char name[50];
    int age;
    int phone;

} student;
int main(){
    student a,b,c;

    strcpy(a.name,"Ronit Shakhari");
    a.age = 19;
    a.phone = 70123648;

    printf("%s \n",a.name);
    printf("%d \n",a.age);
    printf("%d \n",a.phone);

    student* x = &a;

    strcpy(x->name,"Hello");
    x->age = 56;
    x->phone = 4662583;

    printf("%s \n",a.name);
    printf("%d \n",a.age);
    printf("%d",a.phone);

    return 0;
}