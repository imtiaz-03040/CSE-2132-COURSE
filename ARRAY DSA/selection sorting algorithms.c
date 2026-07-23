#include<stdio.h>
void main()
{
    int a[10],i,n,j,min,temp;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("The elements of the array are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }

    printf("\n");
    printf("The selection sorted array are:");

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j] < a[min])
            {
                min=j;
            }
        }

        if(min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}
