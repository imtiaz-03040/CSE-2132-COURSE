#include<stdio.h>
void main()
{
    int i,j,rows,cols;
    int A[3][3],B[3][3],C[3][3];

    printf("Enter the number of rows and cols:");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements for A matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    }
    printf("A= ");
    for(i=0; i<rows; i++)
    {
        printf(" \t");
        for(j=0; j<cols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nEnter elements for B matrix:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    }
    printf("B= ");
    for(i=0; i<rows; i++)
    {
        printf(" \t");
        for(j=0; j<cols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            C[i][j]=A[i][j] + B[i][j];
        }
    }
    printf(" \n A + B= ");
    for(i=0; i<rows; i++)
    {

        for(j=0; j<cols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf(" \t");
    }

}


