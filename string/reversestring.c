#include<stdio.h>
char reverse(char str1[50]){
    str1[50];
    char str2[50];
    int i = 0 , j , k , length = 0;
    // printf("Enter any text :- ");
    // gets(str1);
    while(str1[i]!='\0'){
        length++;
        i++;
    }
    for(j=0,k=length-1; k>=0; k--,j++){
       str2[j] = str1[k];
    }
    str2[j] = '\0';
    return str2;
}
int main(){

    char string[]="ronit";
    // printf("%s",string);
    int str = reverse(string);
    printf("%s",str);
    return 0;
}