#include<iostream>
using namespace std;
class B
{
    int a;
public:
    int b;
    void setab(void)
    {
        a=5;b=10;
    }
    int geta()
    {
        return a;
    }

};
class D: public B
{
    int c;
public:
    void mul()
    {
        c=b*geta();
    }
    void display()
    {
        cout<<"a="<<geta()<<"\n";
        cout<<"b="<<b<<"\n";
        cout<<"c="<<c<<"\n\n";
    }
};
int main()
{
    D d;
    d.setab();
    d.mul();

    d.display();

    d.b=20;
    d.mul();
    d.display();
}
