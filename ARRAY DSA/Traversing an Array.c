#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0,small,pos;
    double mean;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d",  &a[i]);
    }
    printf("\nEnter the elements in the array are:");
    for(i=0; i<n; i++)
    {
        printf("\t  %d",  a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
        mean=sum/n;

    }
    printf("\nThe sum of array elements=  %d",  sum);
    printf("\nThe mean of array elements= %.2f", mean);

    printf("\n");
    small=a[0];
    pos=1;
    for(i=0; i<n; i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            pos=i+1;
        }
    }
    printf("\nThe smallest number is = %d", small);
    printf("\nThe position of the smallest number is = %d", pos);

    printf("\n");


}
