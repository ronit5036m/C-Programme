#include<stdio.h>
int sum();
int main(){
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    printf("Sum of %d is %d",number,sum(number));
    return 0;
}
int sum(int number){
    if(number == 0 || number == 1)
    return 1;
    else
    return number + sum(number-1);
}