#include<stdio.h>

int main(){

    int x  , y  , z ;

    printf("Enter first number :- ");
    scanf("%d",&x);
    printf("Enter second number :- ");
    scanf("%d",&y);
    printf("Enter third number :- ");
    scanf("%d",&z);

    if(x>y && x > z){
        printf("Largest is %d",x);
    }
    else if(y > x && y > z){
        printf("Largest is %d",y);
    }
    else{
        printf("Largest is %d",z);
    }
    
    
    
    return 0;
}