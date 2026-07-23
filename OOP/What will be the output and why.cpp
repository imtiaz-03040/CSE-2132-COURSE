#include<iostream>
using namespace std;
class Swap
{
    int a,b;
public:
    Swap(int m,int n)
    {
        a=m;
        b=n;
    }
    void swapvalue()
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void display()
    {
        cout<<a<< " "<<b;
    }
};

int main()
{
    int m,n;
    cout<<"Enter input:";
    cin>>m>>n;
    Swap A(m,n);
    A.swapvalue();
    A.display();
}
