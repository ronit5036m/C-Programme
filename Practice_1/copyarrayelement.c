#include<stdio.h>
int main(){

    int array1[] = {20,30,45,60};
    int array2[50];
    int lenght = sizeof(array1) / sizeof(array1[0]);
    for(int i = 0; i<lenght; i++){
        array2[i] = array1[i];
    }
    for(int i = 0; i<lenght; i++){
        printf(" %d ",array2[i]);
    }
    return 0;
}