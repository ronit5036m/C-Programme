#include<stdio.h>
int factorial();
int main(){
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    printf("Factorial of %d is %d",number,factorial(number));
    return 0;
}
int factorial(int number){
    if(number == 0 || number == 1)
    return 1;
    else
    return number * factorial(number-1);
}