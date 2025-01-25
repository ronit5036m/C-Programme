#include<stdio.h>
int main(){

    int number;
    printf("Enter number Percent : ");
    scanf("%d",&number);

    if(number>90)
        printf("AA");
    else if (number>80)
        printf("A+");
    else if(number>70)
     printf("A");
    else if(number>60)
        printf("B+");
    else if(number>50)
        printf("B");
    else if(number>=40)
        printf("c");
    else
        printf("F");
    return 0;
}