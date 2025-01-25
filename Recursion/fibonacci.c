#include<stdio.h>
int fibo(int n){
    int res;
    if(n==1 || n==2)
    return 1;
    res = fibo(n-1) + fibo(n-2);
    return res;
}
int main()
{   
    int number;
    printf("Enter number :-");
    scanf("%d",&number);
    printf("%d",fibo(number));
    return 0;
}
