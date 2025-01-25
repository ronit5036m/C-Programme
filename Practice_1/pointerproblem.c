#include <stdio.h>
typedef int* POINTER;
void main(){

    // Pointer Problem Solving Through Typedef

    int x = 10 , y = 20;
    POINTER a = &x , b = &y;
    printf("%p \n",a);
    printf("%p",b);


}