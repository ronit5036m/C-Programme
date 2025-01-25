#include<stdio.h>
#include<string.h>

int main(){
    FILE *file;

    file = fopen("index.txt","r");
    
    char name[50];
    int age;
    
    if(file!=NULL){
        
        while(!feof(file)){
            // char ch = fgetc(file);
            // printf("%c",ch);

            fgets(name,50,file);
            printf("%s",name);
        }

        fclose(file);
    }

    return 0;
}