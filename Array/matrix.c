#include<stdio.h>
int main()
{
    int row1, col1,row2,col2, i , j , k , sum=0 , result[10][10];

    printf("Enter First mtrix Row and Column :- ");
    scanf("%d %d",&row1,&col1);

    printf("Enter Second mtrix Row and Column :- ");
    scanf("%d %d",&row2,&col2);

    int first[row1][col1], second[row2][col2];

    while (col1!=row2){
        printf("Matrix Multiplication Not Possible Re-Enter Row and Column:- \n");

        printf("Enter First mtrix Row and Column :- ");
        scanf("%d %d",&row1,&col1);

        printf("Enter Second mtrix Row and Column :- ");
        scanf("%d %d",&row2,&col2);
    }
    printf("Enter first matrix Value :- \n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++){
            printf("Enter A=[%d][%d] \n",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    printf("Enter Second matrix Value :- \n");
    for (i = 0; i < row2; i++){
        for (j = 0; j < col2; j++){
            printf("Enter B=[%d][%d] \n",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    
    printf("Printing of First Matrix :- \n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    printf("Printing of Second Matrix :- \n");
    for (i = 0; i < row2; i++){
        for (j = 0; j < col2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of Matrix :- ");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col2; j++){
            for (k = 0; k < col1; k++)
            {
                sum = sum + first[i][j] * second[k] [j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        
    }

    printf("Printing of Result Matrix :- \n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
