#include<stdio.h>
void main()
{
    int array1[10],array2[10],n,i;
    printf("How many numbers needed:");
    scanf("%d",&n);
    for(i=0; i <n; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("The Array 1 is:");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }
    printf("\n");
    printf("The Array 2 is:");
    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }


}
