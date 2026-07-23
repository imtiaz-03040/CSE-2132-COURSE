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
    printf("From what position you want to delete:");
    scanf("%d", &pos);
    if(pos<=0 || pos>n)
    {
        printf("Invalid Position.");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        printf("\nEnter the modified array are:");
        for(i=0;i<n;i++)
        {
            printf(" \t %d", a[i]);
        }
    }
}
