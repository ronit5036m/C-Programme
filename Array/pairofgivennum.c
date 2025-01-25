// Find the Total Number of Pair in The Array Whoes Sum is Equal to the Given Value x
#include<stdio.h>
int main()
{
    int array[8] = {1,2,3,4,5,6,7,8};

    int totalPaires = 0 , number = 5;

    for(int i = 0; i<7; i++){
        for(int j = i+1; j<7; j++){
            if(array[i] + array[j] == number){
                totalPaires ++;
                printf("Paires are (%d,%d)\n",array[i],array[j]);
            }
        }
    }
    printf("Number of Pairs are :- %d",totalPaires);



    return 0;
}
