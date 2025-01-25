#include<stdio.h>
int main(){
    int number ,temp,reminder,sum = 0;
    printf("Enter a range :- ");
    scanf("%d",&number);

    temp = number;

    while(temp!=0){
        reminder = temp%10;
        sum = sum + reminder;
        temp/=10;
    }
    printf("%d",sum);


    return 0;
}