#include<stdio.h>
int main(){

    int x = 10;
    int y = 30;
    int temp;
    printf("Before Swap : x = %d , y = %d",x,y);
    temp = x;
    x = y;
    y = temp;

    printf("After Swap : x = %d , y = %d",x,y);

    return 0;
}