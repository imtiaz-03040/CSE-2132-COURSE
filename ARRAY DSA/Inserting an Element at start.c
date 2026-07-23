#include<stdio.h>
void main ()
{
    int a[10],i,n,num;
    printf("Enter the size of array:");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the elements in the array are:");
    for(i=0; i<n; i++)
    {
        printf("\t %d",a[i]);
    }
    printf("\n");

    printf("Enter the data you want to insert:");
    scanf("%d", &num);


    for(i=n-1; i>=0; i--)
    {
        a[i+1]=a[i];
    }
    a[0]=num;
    n++;
    printf("\nEnter the inserted elements in the array are:");
    for(i=0; i<n; i++)
    {
        printf("\t %d",a[i]);
    }


}
