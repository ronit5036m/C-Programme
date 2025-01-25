#include<stdio.h>
void decreasing(int n){
    if(n==0) return;
    decreasing(n-1);
    printf("%d \n",n);
}
int main()
{   
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    decreasing(number);
    return 0;
}
