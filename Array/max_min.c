#include<stdio.h>
int max_min();
int main()
{   
    int array[5];
    printf("Enter 5 Number :- \n");
    for(int i = 0; i<5; i++){
        printf("Enter Number %d value :- \n",i+1);
        scanf("%d",&array[i]);
    }

    // Maximum Number 
    
    int max = array[0] , length;
    length = sizeof(array) / sizeof(array[4]);
    for(int i = 0; i<length; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    // Minimum Number 

    int min = array[0];
    for(int i = 0; i<length; i++){
        if(min>array[i]){
            min = array[i];
        }
    }
    printf("Maximum Number is %d\n",max);
    printf("Minimum Numbert %d\n",min);

    return 0;
}

int max_min(int number){

    








}
