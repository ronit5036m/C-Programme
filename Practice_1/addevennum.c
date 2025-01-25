#include<stdio.h>

int main(){
    int number;
    printf("Enter a Range :- ");
    scanf("%d",&number);
    int sum , i = sum = 0;
    while(i<=number){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }

    printf("%d",sum);


    return 0;
}