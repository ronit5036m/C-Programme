#include<stdio.h>

int main(){
    int number;
    printf("Enter Searching Number :- ");
    scanf("%d",&number);
    int array[] = {20,65,38,98};
    int position = -1;
    for(int i = 0; i<number; i++){
        if(number == array[i]){
            position = i + 1;
            // break;
        }
    }

    if(position==-1){
        printf("Not Found ! ");
    }
    else{
        printf("Number Has Been Found :- \n");
        printf("Number = %d\n",number);
        printf("Position = %d\n",position);
    }

    return 0;
}