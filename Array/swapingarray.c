#include<stdio.h>
int main()
{
    int num[26], temp;

    num[0] = 200;
    num[25] = 100;
    printf("Before Swaping :- %d,%d\n",num[0],num[25]);
    temp = num[0];
    num[0] = num[25];
    num[25] = temp;
    printf("After Swaping :- %d,%d\n",num[0],num[25]);
    return 0;
}
