#include<stdio.h>
int main(){
    int number,count =0 ;
    printf("Enter a range :- ");
    scanf("%d",&number);

    if(number<1){
        count++;
    }
    else{
        for(int i = 2; i<=number-1; i++){
            if(number%i==0){
                count++;
                break;
            }
        }
    }
    if(count==0){
            printf("%d is prime number",number);
        }
        else{
            printf("%d is not a prime number",number);
    }

    return 0;
}