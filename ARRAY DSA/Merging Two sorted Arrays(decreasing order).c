#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],i,j=0,j1=0,j2=0,n1,n2,m;
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

    while(j1<n1 && j2<n2)
    {
        if(a[j1]>b[j2])
        {
            c[j]=a[j1];
            j1++;
        }
        else
        {
            c[j]=b[j2];
            j2++;
        }
        j++;
    }
    if(j1==n1)
    {
        while(j2<n2)
        {
            c[j]=b[j2];
            j2++;
            j++;
        }
    }

    else if(j2==n2)
    {
        while(j1<n1)
        {
            c[j]=a[j1];
            j1++;
            j++;
        }
    }
    printf("\n The merging two sorted array is:");
    for(i=0;i<m;i++)
    {
        printf("\t %d", c[i]);
    }
}
