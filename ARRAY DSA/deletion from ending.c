#include<stdio.h>
void main()
{
    int a[10],i,n,pos;
    printf("Enter the size of array:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the array elements are:");
    for(i=0;i<n;i++)
    {
        printf(" \t  %d", a[i]);
    }
    printf("\n");

    if(i=n-1)
    {
        n--;
    }
    printf("\nEnter the new modified array are:");

    for(i=0;i<n;i++)
    {
        printf("\t %d", a[i]);
    }
}
