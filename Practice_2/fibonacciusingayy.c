#include<stdio.h>
int main(){
    int n = 10;
    int arr[] = {0,1},fibo[50];
    int lenght = sizeof(arr) / sizeof(arr[0]);
    for(int i =2; i<n; i++){
        fibo[i] = arr[i-1] + arr[i-2];
    }
    for(int j =0; j<n; j++){
        printf("%d ",fibo[j]);
    }
    return 0;
}