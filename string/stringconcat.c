#include <stdio.h>
#include <string.h>

int main(){

    char str1[30];
    char str2[30];
    int length = 0,i = 0 , j=0;

    printf("Enter 1st string :- ");
    gets(str1);
    printf("Enter 2nd string :- ");
    gets(str2);
    while (str1[i]!='\0'){
        length++;
        i++;
    }
    while (str2[j]!='\0'){
        str1[length+j] = str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;
}