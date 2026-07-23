#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
public:
void getdata(int a,float b);
    void putdata(void);

};
void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}
void item::putdata(void)

    {
        cout<<"Numbers:"<<number<<endl;
        cout << "Cost:" << cost<<endl;
    }

int main()
{
    item x;

    x.getdata(100,299.5);
    x.putdata();
   cout<< endl;

    item y;
    y.getdata(50,45.5);
    y.putdata();
}
