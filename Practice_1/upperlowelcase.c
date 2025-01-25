#include<stdio.h>

int main(){

    char ch;

    printf("Enter Character :- ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("Lower Case");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Upper Case");
    }
    
    

    return 0;
}