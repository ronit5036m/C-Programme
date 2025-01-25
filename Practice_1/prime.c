#include<stdio.h>
int isprime(int number);
void main(){
    int number , count = 0, i;
    printf("Enter a Number :- ");
    scanf("%d",&number);
    if(isprime(number) == 1){
        printf("%d is a Prime Number",number);
    }else{
        printf("%d is Not a Prime Number",number);
    }
}

int isprime(int number){
int count = 1;
if(number<=1){
    count = 0;
}
else{
    for(int i = 2; i<number; i++){
        if(number%i == 0){
            count = 0;
            break;
        }
    }
}

return count;

}