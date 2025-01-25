#include<stdio.h>
int main()
{   

    int a_row,a_col,b_row,b_col,sum=0;
    int A[50][50] , B[50][50] , result[50][50];
    printf("Enter first matrix row and col :- ");
    scanf("%d %d",&a_row,&a_col);
    
    printf("Enter Second matrix row and col :- ");
    scanf("%d %d",&b_row,&b_col);

    while (a_col!=b_row){
        printf("Matrix are not equal !");
        printf("Enter first matrix row and col :- ");
        scanf("%d %d",&a_row,&a_col);
        
        printf("Enter Second matrix row and col :- ");
        scanf("%d %d",&b_row,&b_col);
    }

    printf("Enter A matrix value :- \n");
    for(int i= 0; i<a_row; i++){
        for(int j = 0; j<a_col; j++){
            printf("Value of [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter B matrix value :- \n");
    for(int i= 0; i<b_row; i++){
        for(int j = 0; j<b_col; j++){
            printf("Value of [%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i= 0; i<a_row; i++){
        for(int j = 0; j<b_col; j++){
            for(int k=0; k<a_col; k++){
                sum = sum + A[i][k] * B[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("Multiplication of matrix value :- \n");
    for(int i= 0; i<a_row; i++){
        for(int j = 0; j<b_col; j++){
            printf(" %d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
