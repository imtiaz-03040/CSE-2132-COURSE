#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return(a+b);
}
double sum(int a,double b)
{
    return(a+b);
}
int main()
{
    int p;
    double q;
    p=sum(10,20);
    q=sum(10,12.5);

    cout<<"P="<<p<<"    Q="<<q;
}
