#include<stdio.h>
int main()
{
    int array[7] = {12,4,56,96,35,47,96};
    int sumEven = 0;
    int sumOdd = 0;
    int difference;
    int length = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i<length; i++){
        if(i%2!=0) sumEven += array[i];
        else sumOdd += array[i];
    }
    difference = sumOdd - sumEven;
    printf("Difference of Even and Odd index sum value %d",difference);
    return 0;
}
