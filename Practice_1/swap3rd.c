#include<stdio.h>

int main(){

    int x = 10 , y = 20 , temp;

    printf("Before Swap : x =  %d \n",x);
    printf("Before Swap : Y =  %d \n",y);

    temp = x;
    x = y;
    y = temp;

    printf("After swaping X = %d \n",x);
    printf("After swaping Y = %d \n",y);
    

    return 0;
}