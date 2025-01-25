#include<stdio.h>
int main(){
    int number ,sum = 0;
    printf("Enter a range :- ");
    scanf("%d",&number);

    for(int i = 1; i<=10; i++){
        sum = sum + i;
    }
    printf("Sum = %d",sum);
    return 0;
}