// Find the Total Number of Pair in The Array Whoes Sum is Equal to the Given Value x
#include<stdio.h>
int main()
{
    int array[8] = {1,2,3,4,5,6,7,8};

    int tripletes = 0 , number = 15;

    for(int i = 0; i<7; i++){
        for(int j = i+1; j<7; j++){
            for(int k = j+1; k<7; k++){
                if(array[i] + array[j] + array[k] == number){
                    tripletes++;
                    printf("(%d,%d,%d) \n",array[i],array[j],array[k]);
                }
            }
        }
    }
    printf("Number of Pairs are :- %d",tripletes);



    return 0;
}
