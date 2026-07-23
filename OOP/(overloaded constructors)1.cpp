#include<iostream>
using namespace std;
class integer
{
    int m,n;
public:
    integer()
    {
        m=0;
        n=0;
    }
    integer(int x,int y)
    {
        m=x;
        n=y;
    }
    integer(integer&i)
    {
        m=i.m;
        n=i.n;
    }
    void display(void)
    {
        cout<<"m="<<m<<"   " <<"n="<<n<<"\n";
    }
};

int main()
{
    integer i1;
    integer i2(20,30);
    integer i3(i2);

    i1.display();
    i2.display();
    i3.display();

}
