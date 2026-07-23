#include<stdio.h>
void main ()
{
    int a[10],n,i,num;
    printf(" Enter the size of array:");
    scanf(" %d", &n);

    for(i=0;i<n;i++)
    {
        printf(" a[%d]=",i);
        scanf("%d", &a[i]);
    }

    printf("Enter elements in the array are: ");
    for(i=0;i<n;i++)
    {
        printf(" \t %d", a[i]);
    }
    printf("\n");

    printf("Enter the data you want to insert :");
    scanf("%d", &num);

    if(i=n)
    {
        a[i]=num;
    }
    n++;

    printf("\nEnter the inserted elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf(" \t %d", a[i]);
    }
}
