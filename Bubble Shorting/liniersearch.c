#include<stdio.h>
int main()
{
    int arr[] = {10,50,85,34,12,33,33} ,size ,number , searchele = 0, index;
    size= sizeof(arr) / sizeof(arr[0]);
    printf("Enter Searching Element :- ");
    scanf("%d",&number);
    for(int i = 0; i<size; i++){
        if(arr[i] == number){
            searchele++;
            index = i + 1;
            break;
        }
        else
            searchele=0;
    }
    if(searchele!=0)
        printf("The value is Found at %d index ",index);
    else
        printf("The value Not Found");
    return 0;
}
