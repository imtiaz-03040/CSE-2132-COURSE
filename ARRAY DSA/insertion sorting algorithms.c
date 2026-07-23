#include<stdio.h>
void main()
{
    int a[10],i,n,j,temp;

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
    printf("The insertion sorted array are:");
     for(i=1;i<n;i++)
     {
         temp=a[i];
         j=i-1;
         while(j>=0 && a[j]>temp)
         {
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=temp;
     }
     for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }

}
