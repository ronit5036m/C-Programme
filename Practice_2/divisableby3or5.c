#include<stdio.h>
int main(){
    int number ,sum = 0;
    printf("Enter a range :- ");
    scanf("%d",&number);

    for(int i = 1; i<=number; i++){
        if(i%3 == 0 && i%5==0){
            printf("%d ",i);
        }
    }
    return 0;
}