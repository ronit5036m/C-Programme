#include<stdio.h>

int main(){

    int startyear , endyear;

    printf("Enter Starting Year :- ");
    scanf("%d",&startyear);
    printf("Enter Ending Year :- ");
    scanf("%d",&endyear);

    for(int i = startyear; i<=endyear; i++){
        if((i%4 == 0 && i%100 != 0) || i%400 == 0){
            printf(" %d ",i);
        } 
    }
    return 0;
}