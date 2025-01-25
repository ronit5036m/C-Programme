#include<stdio.h>
void goodmorn(int n){
    if(n==0) return;
    printf("Good morning \n");
    goodmorn(n-1);
}
int main()
{   
    int number;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    goodmorn(number);
    return 0;
}
