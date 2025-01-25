#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    printf("%d \n",n);
    increasing(n-1);
    printf("%d \n",n);
}
int main()
{   
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    increasing(number);
    return 0;
}
