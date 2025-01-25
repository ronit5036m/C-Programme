#include<stdio.h>

int linearsearch(int arr[],int size){
    int number , count = 0 ,index;
    printf("Enter Searchable Element :- ");
    scanf("%d",&number);
    for(int i = 0; i<size; i++){
        if(arr[i] == number){
            count++;
            index = i;
            break;
        }
    }
    if(count!=0)
        return 1 , index;
    else
        return 0;
}



int main(){
    int arr[]= {10,50,63,48};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    int index;
    if(linearsearch(arr,lenght)==1){
        printf("Item Found in %d",index);
    }
    else{
        printf("Item not Found");
    }
}
