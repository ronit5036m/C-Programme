#include <stdio.h>
#include <string.h>
int main(){


    char str[50];
    int i,vowel,consonant,word,digit,ch,other;
    i=vowel=consonant=digit=ch=word=other=0;
    printf("Enter 1st string :- ");
    gets(str);
    while(str[i]!='\0'){
        if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || 
        (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')){
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            consonant++;
        }
        else if(str[i]==' '){
            word++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else{
            other++;
        }
        i++;
    }
    word++;
    
    printf("Vowel %d\n",vowel);
    printf("consonant %d\n",consonant);
    printf("Digit %d\n",digit);
    printf("Word %d\n",word);
    printf("other %d",other);

    return 0;
}