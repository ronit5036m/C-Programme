#include<stdio.h>
#include<stdbool.h>
int ispalindrome();
int main(){

    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if(ispalindrome(arr,size)==true){
        printf("This is palindrome Number ");
    }
    else{
        printf("This is not a palindrome Number ");
    }
    return 0;
}
int ispalindrome(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;

}