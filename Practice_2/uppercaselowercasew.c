#include<stdio.h>
int main(){
    char ch;
    printf("Enter a ch :");
    scanf("%c",&ch);

    
    if(ch>='a' && ch <= 'z'){
        printf("Lowercase");
    }
    else if(ch>='A' && ch <= 'Z'){
        printf("Uppercase");
    }



    return 0;
}