#include<stdio.h>
int main()
{   
    int number , arr[100] , i = 0;
    printf("Enter a Number :- ");
    scanf("%d",&number);

    while(number>0){
        arr[i] = number % 2;
        number = number / 2;
        i++;
    }
    for(int j = number-1; j>=0; j--){
        printf("Decimal Equavelent %d ",arr[j]);
    }


    return 0;
}
