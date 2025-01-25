#include<stdio.h>

int main(){
    int row , column;
    printf("Enter Row :- ");
    scanf("%d",&row);
    printf("Enter Column :- ");
    scanf("%d",&column);

    int A[row][column];
    int B[row][column];
    int add[row][column];

    printf("Enter Element for A matrix :- \n");
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter Element for B matrix :- \n");
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("B [%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("A = \n");
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("B = \n");
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    printf("Adition = \n");
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            add[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf(" %d ",add[i][j]);
        }
        printf("\n");
    }
    printf("Transpose = \n");
    for(int i =0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf(" %d ",add[j][i]);
        }
        printf("\n");
    }

    return 0;
}