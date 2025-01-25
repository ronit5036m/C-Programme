#include<stdio.h>
int main(){
    int number ,temp,reminder,amstrong = 0;
    printf("Enter a range :- ");
    scanf("%d",&number);

    temp = number;

    while(temp!=0){
        reminder = temp%10;
        amstrong = amstrong + reminder*reminder*reminder;
        temp/=10;
    }
    if(number==amstrong){
        printf("%d is a amstrong number ",number);
    }
    else{
        printf("%d is not a amstrong number ",number);
    }


    return 0;
}