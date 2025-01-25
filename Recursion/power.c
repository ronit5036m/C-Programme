#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a * power(a,b-1);
}
int main(){
    int base , exp , res;
    printf("Enter base :- ");
    scanf("%d",&base);
    printf("Enter exponent :- ");
    scanf("%d",&exp);

    printf("%d to the power %d is %d",base,exp,power(base,exp));

    return 0;
}