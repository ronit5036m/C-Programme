#include<stdio.h>
void sum(int n, int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
}
int main()
{
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    sum(number,0);
    return 0;
}
