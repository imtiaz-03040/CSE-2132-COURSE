#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],i,j=0,n1,n2,m;
    printf("Enter the size of 1st array:");
    scanf("%d", &n1);
    printf("Enter the elements of the 1st array are:\n");
    for(i=0; i<n1; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the size of 2nd array:");
    scanf("%d", &n2);
    printf("Enter the elements of the 2nd array are:\n");
    for(i=0; i<n2; i++)
    {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }
    m=n1+n2;
    for(i=0; i<n1; i++)
    {
        c[j]=a[i];
        j++;
    }
    for(i=0; i<n2; i++)
    {
        c[j]=b[i];
        j++;
    }
    printf("\nThe unsorted merged array is:");
    for(i=0; i<m; i++)
    {
        printf("\t %d",c[i]);
    }
}
