#include<stdio.h>
void main()
{
    int num[5]= {10,15,20,25,36};
    int value=25;
    int position=-1;
    for(i=0; i <5; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }

    }
    if(position==-1)
        printf("Not Found!");
    else
        printf("The position of %d is=%d",value,pos);

}
