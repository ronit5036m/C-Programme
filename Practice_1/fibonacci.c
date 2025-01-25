#include<stdio.h>
int main(){

    int first = 0, second = 1 , count = 0 , remider , number , fibo;

    printf("Enter a Range :- ");
    scanf("%d",&number);

    while(count<number){
        if(count<=1){
            fibo = count;
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf(" %d ",fibo);
        count++;
    }
    return 0;
}