#include<stdio.h>
void main()
{
    int a[10],i,n,num,pos;
    printf("Enter the size of array:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
      printf("a[%d]=",i);
      scanf("%d", &a[i]);
    }
    printf("\nEnter the elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
    }
    printf("\n");
    printf("\nEnter the data you want to insert:");
    scanf("%d", &num);
    printf("\nEnter position at which data to be inserted:");
    scanf("%d", &pos);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    if(pos<=0 || pos>n+1)
    {
        printf("Invalid Position.");
    }
    else
        printf("Enter inserted elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
    }

}
