#include<stdio.h>
void decreasing(int n){
    if(n==0) return;
    printf("%d \n",n);
    decreasing(n-1);
}
int main()
{   
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    decreasing(number);
    return 0;
}
