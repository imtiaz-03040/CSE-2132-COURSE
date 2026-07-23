#include<stdio.h>
void main()
{
    int i,value,pos=-1,num[5]= {10,15,20,25,36};
    printf("Enter the value you want to search:");
    scanf("%d",&value);

    for(i=0; i < 5; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }

    }
    if(pos==-1)
        printf("Not Found!");
    else
        printf("The position of %d is=%d \n ",value,pos);

}
