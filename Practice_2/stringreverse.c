#include<stdio.h>
int main(){
    char str[] = "RONIT";
    int i=0 , length = 0;
    while(str[i]!='\0'){
        i++;
        length++;
    }
    int temp;
    for(int i=0, j=length-1; i<=j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s",str);
    return 0;
}
