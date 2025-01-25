#include<stdio.h>

int main(){

    int number , x  , y  , z ;

    printf("Enter Number :- ");
    scanf("%d",&number);
    
    if(number>=90){
        printf("A+");
    }
    else if(number>=80){
        printf("A");
    }
    else if(number>=70){
        printf("B+");
    }
    else if(number>=60){
        printf("B");
    }
    else if(number>=50){
        printf("C");
    }
    else if(number>=40){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}