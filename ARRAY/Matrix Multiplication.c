#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[5][5], r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows&cols for Matrix A:");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows&cols for Matrix B:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!! Column of Matrix A not Equal to Matrix. B\n");

        printf("Enter rows&cols for Matrix A:");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows&cols for Matrix B:");
        scanf("%d %d",&r2,&c2);
    }
    printf("\n Enter elements of Matrix A:\n");
    for(i=0; i < r1; i++)
    {
        for(j=0; j < c1; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    }
    printf(" Enter elements of Matrix B:\n");
    for(i=0; i < r2; i++)
    {
        for(j=0; j < c2; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    printf("\n\nA= ");
    for(i=0; i<r1; i++)
    {
        printf(" \t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nB= ");
    for(i=0; i<r2; i++)
    {
        printf(" \t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("Result Matrix =  ");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d  ",C[i][j]);

        }
        printf("\n");

    }
}
