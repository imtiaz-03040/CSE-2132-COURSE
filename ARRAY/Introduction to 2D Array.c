#include<stdio.h>
void main()
{
    int i,j;
    int a[3][4]={ {5,6,7,8},{3,4,5,6},{11,12,13,14} };
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
