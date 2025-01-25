#include<stdio.h>
int main()
{
    int array[7] = {1,2,3,4,5,6,7}, number , count = 0;
    int length = sizeof(array) / sizeof(array[0]);
    printf("Enter a Number :- ");
    scanf("%d",&number);

    for(int i = 0; i<length; i++){
        if(array[i]>number){
            count++;
        }
    }
    printf("In the Given Array Grater than %d numbers are %d numbers",number,count);
    return 0;
}
