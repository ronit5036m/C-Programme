#include<stdio.h>  
int main()  
{  
    int arr[] = {1,2,3,2,1};
    int mainlenght = sizeof(arr) / sizeof(arr[0]);
    int brr[mainlenght];
    int lenght = sizeof(arr) / sizeof(arr[0]) - 1;
    for(int i = 0; i<=lenght; i++){
        brr[i] = arr[lenght-i];
    }
    for(int i = 0; i<=lenght; i++){
        printf("%d ",brr[i]);
    }
    int count = 0;
    for(int i = 0; i<=lenght; i++){
        if(arr[i] == brr[i])
        count ++;
    }
    if(mainlenght == count) printf("\narray is Palindrome ");
    
    else printf("\n array is not Palindrome");
    

}  