#include<stdio.h>

int main(){

    int x , y;

    printf("Enter first number :- ")    ;
    scanf("%d",&x);
    
    printf("Enter Second number :- ")    ;
    scanf("%d",&y);

    if(x == y){
        printf("First and Second Numbers is Equal");
    }
    else{
        printf("First and Second Numbers are not Equal");
    }


    return 0;
}