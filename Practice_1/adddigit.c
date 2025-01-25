#include<stdio.h>
int main(){

    int sum = 0 , reminder, temp, number;

    printf("Enter a number :- ");
    scanf("%d",&number);

    temp = number;

    while (temp!=0){
        reminder = temp % 10;
        sum = sum + reminder;
        temp = temp/10;
    }
    
    printf("%d",sum);


    return 0;
}