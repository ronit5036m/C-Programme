#include<stdio.h>

void sumavg(int* x , int* y , int* sum , int* avg){

    *sum = *x + *y;
    *avg = *sum / 2;

    return;
}

int main(){

    int x = 10 , y = 20 , sum , avg;


    sumavg(&x,&y,&sum,&avg);
    printf("SUM = %d AVG = %d",sum,avg);
    
    return 0;
}
