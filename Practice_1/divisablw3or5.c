#include<stdio.h>

int main(){

    int number;

    printf("Enter a range :- ");
    scanf("%d",&number);

    int i = 1;
    while(i<=number){
        if(i%3==0 || i%5==0){
            printf(" %d ",i);
        }
        i++;
    }


    return 0;
}