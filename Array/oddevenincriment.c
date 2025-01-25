#include<stdio.h>
// Even array Addition By 10
// Odd array Multiplied By 2
int main()
{
    int array[7] = {1,2,3,4,5,6,7};

    for(int i = 0; i<=6; i++){
        if(i%2!=0) array[i]*=2;
        else array[i]+=10;
    }
    for(int i = 0; i<=6; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
