#include<stdio.h>

int main(){

    int x = 10 , y = 20 , number;

    printf("Enter a range : ");
    scanf("%d",&number);
    
    for(int i = 0; i<=number; i++){
        if(i%2 != 0){
            printf(" %d ",i);
        }
    }
    
    return 0;
}