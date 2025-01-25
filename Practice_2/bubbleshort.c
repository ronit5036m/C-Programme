#include<stdio.h>
int main(){

    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;
    printf("Orginal array :- \n");
    for(int j = 0; j<size; j++){
        printf("%d ",arr[j]);
    }

    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<=size-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("Shorted array :- \n");
    for(int j = 0; j<size; j++){
        printf("%d ",arr[j]);
    }

    return 0;
}