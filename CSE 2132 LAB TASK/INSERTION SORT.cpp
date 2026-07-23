#include<iostream>
using namespace std;
int main ()
{
    int n=6;
    int a[6]= {1,4,2,8,5,9};
    for(int j=3; j>0; j--)
    {
             if(a[j]>a[j-1])
             {
                 swap (a[j],a[j+1]);
             }
    }
       for(int j=0; j<n; j++)
       {
           cout<< a[j]<< " ";
       }
}
