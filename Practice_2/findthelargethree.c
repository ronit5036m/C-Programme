#include<stdio.h>
int main(){
    int n1 ,n2 ,n3;
    printf("Enter three number : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3){
        printf("Largest is %d ",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("Largest is %d ",n2);
    }
    else{
        printf("Largest is %d ",n3);
    }

    return 0;
}