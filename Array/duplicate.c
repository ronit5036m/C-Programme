#include<stdio.h>
int main()
{   
    int arr[5] = {11,5,63,21,5};
    for(int i = 0; i<=6; i++){
        for(int j = i+1; j<=6; j++){
            if(arr[i] == arr[j]){
                printf("%d is Duplicate \n",arr[i]);
                break;           
            }
        }
    }
    return 0;
}
