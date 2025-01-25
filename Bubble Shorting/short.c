#include<stdio.h>
void shorted();
void printArray();
int main(){
    int arr[] = {5,10,3,6,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Orginal Array :- ");
    printArray(arr,size);
    shorted(arr,size);
    printf("Shorted Array :- ");
    printArray(arr,size);
    return 0;
}

void shorted(int arr[],int size){
    int temp;
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}

void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}