#include<stdio.h>
int main(){
    int number;
    printf("Enter a range :- ");
    scanf("%d",&number);
    int fibo[100] = {0,1};
    for(int i = 2; i<number; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i = 0; i<number; i++){
        printf(" %d ",fibo[i]);
    }
    return 0;
}