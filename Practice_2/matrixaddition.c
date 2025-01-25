#include<stdio.h>
int main()
{   

    int row,col;
    printf("Enter row and column of the matrix :- ");
    scanf("%d %d",&row,&col);

    int A[row][col] , B[row][col] , C[row][col];

    printf("Enter A matrix value :- \n");
    for(int i= 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("Value of [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter B matrix value :- \n");
    for(int i= 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("Value of [%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i= 0; i<row; i++){
        for(int j = 0; j<col; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Addtion of matrix value :- \n");
    for(int i= 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
