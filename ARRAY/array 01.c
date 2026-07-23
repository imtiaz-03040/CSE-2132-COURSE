#include<stdio.h>
void main ()
{
    int i,n,sum=0;
    double avg;
    int a[100];
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Put the values:");
    for(i=0; i < n; i++)
    {

        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }

    printf("The sum  is=%d\n", sum);
    printf("The average is=%.2f\n",avg);
}
