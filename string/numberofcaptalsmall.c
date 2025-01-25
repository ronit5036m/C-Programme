#include<stdio.h>

int main(){

    char str[100] , i , digit,capital,small;
    digit=capital=small=0;
    printf("Enter a text :- ");
    gets(str);

    while (str[i]!='\0'){
        if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else if((str[i]>='A' && str[i]<='Z')){
            capital++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            small++;
        }
        i++;
    }
    
    printf("Capital %d \n",capital);
    printf("Small %d \n",small);
    printf("Digit %d \n",digit);

    

    return 0;
}