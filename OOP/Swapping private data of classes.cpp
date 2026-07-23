#include<iostream>
using namespace std;
class Class_2;
class Class_1
{
    int value1;
public:
    void indata(int a)
    {
        value1=a;
    }
    void display(void)
    {
        cout<<value1<<"\n";
    }
    friend void exchange(Class_1 &,Class_2 &);
};
class Class_2
{
    int value2;
public:
    void indata(int a)
    {
        value2=a;
    }
    void display(void)
    {
        cout<<value2<<"\n";
    }
    friend void exchange(Class_1 &,Class_2 &);
};

void exchange(Class_1 &x, Class_2 &y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}

int main()
{
    Class_1 c1;
    Class_2 c2;
    c1.indata(100);
    c2.indata(200);

    cout<<"values before exchange:"<<endl;
    c1.display();
    c2.display();
    cout<<"\n";

    exchange(c1,c2);

    cout<<"values after exchange:"<<endl;
    c1.display();
    c2.display();
    cout<<"\n";


}


