#include<stdio.h>
void increasing(int x, int n){
    if(x>n) return;
    printf("%d \n",x);
    increasing(x+1,n);
}
int main()
{   
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    increasing(1,number);
    return 0;
}
