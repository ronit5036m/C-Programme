#include<stdio.h>
int main(){
    int number ,temp,reminder,reverse = 0;
    printf("Enter a Number :- ");
    scanf("%d",&number);

    temp = number;

    while(temp!=0){
        reminder = temp%10;
        reverse = reverse * 10 +reminder;
        temp/=10;
    }
    if(reverse==number){
        printf("%d is a palindrome number",number);
    }
    else{
        printf("%d is not a palindrome number",number);
    }


    return 0;
}