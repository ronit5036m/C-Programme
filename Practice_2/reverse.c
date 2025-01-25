#include<stdio.h>
int main(){
    int number ,temp,reminder,reverse = 0;
    printf("Enter a range :- ");
    scanf("%d",&number);

    temp = number;

    while(temp!=0){
        reminder = temp%10;
        reverse = reverse * 10 +reminder;
        temp/=10;
    }
    printf("%d",reverse);


    return 0;
}