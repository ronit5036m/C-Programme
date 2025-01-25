#include<stdio.h>
int main(){

    int x = 10;
    int y = 30;
    int temp;
    printf("Before Swap : x = %d , y = %d",x,y);

    x = x - y;
    y = x + y;
    x = y - x;

    printf("After Swap : x = %d , y = %d",x,y);

    return 0;
}