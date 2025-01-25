#include<stdio.h>

int main(){

    int sum = 0 , number;

    printf("Enter a Range :- ");
    scanf("%d",&number);

    // for(int i = 0; i<=number; i++){
    //     result = i + result;
    // }
    int i = 1;
    while(i<=number){
        sum = i + sum;
        i++;
    }
    printf("%d",sum);
    

    return 0;
}