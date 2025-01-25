#include<stdio.h>
int main()
{
    char str1[] = "RONIT";
    char str2[20];
    int i=0, length = 0 , j;
    while(str1[i]!='\0'){
        length++;
        i++;
    }
    
    for(int i = 0, j=length-1; j>=0; j--,i++){
        str2[i]=str1[j];
    }
    str2[j] = '\0';
    puts(str2);

    return 0;
}
