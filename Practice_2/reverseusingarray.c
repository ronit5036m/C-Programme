#include<stdio.h>
int main(){

    int array[30] , number;

    printf("Enter element :- ");
    scanf("%d",&number);

    int temp = number; 
    int i = 0;
    while(temp!=0){
        array[i] = temp%10;
        temp = temp/10;
        i++;
    }

    for(int j = 0; j<i; j++){
        printf("%d",array[j]);
    }


    return 0;
}
