#include<stdio.h>
int main(){
    int number ,sum = 0;
    printf("Enter a range :- ");
    scanf("%d",&number);

    for(int i = 1; i<=number; i++){
        if(i%2==0){
            sum = sum +i;
        }
    }
    printf("Sum = %d",sum);
    return 0;
}