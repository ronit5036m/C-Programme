#include<stdio.h>

int main(){
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
int flag = 1;
    for(int i = 1; i<5; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ",flag);
            flag++;
        }
        printf("\n");
    }

    return 0;
}