#include<stdio.h>

int main(){

    int x = 10 , y = 20;

    printf("Before Swap : x =  %d \n",x);
    printf("Before Swap : Y =  %d \n",y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swaping X = %d \n",x);
    printf("After swaping Y = %d \n",y);

    return 0;
}