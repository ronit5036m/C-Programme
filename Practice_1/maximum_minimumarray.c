#include<stdio.h>
int main(){
    int n;
    printf("Enter a How Many numbers :- ");
    scanf("%d",&n);
    int array[n];
    int lenght = sizeof(array) / sizeof(array[0]);

    // Input in array

    for(int j=0; j<lenght; j++){
        printf("Enter value of %d :- ",j+1);
        scanf("%d",&array[j]);
    }

    // Maximum Number 

    int max = array[0];
    for(int i = 0; i<lenght; i++){
        if(max<array[i]){
            max = array[i];
        }
    }

    // Minimum Number 

    int min = array[0];
    for(int i = 0; i<lenght; i++){
        if(min>array[i]){
            min = array[i];
        }
    }
    printf("Max Number is %d \n",max);
    printf("Min Number is %d",min);
    return 0;
}