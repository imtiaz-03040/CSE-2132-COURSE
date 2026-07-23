#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int x;
public:
    void setvalue(int i)
    {
        x=i;
    }
    friend void Max(XYZ,ABC);
};
class ABC
{
    int x;
public:
    void setvalue(int i)
    {
        x=i;
    }
    friend void Max(XYZ,ABC);
};

void Max(XYZ m,ABC n)
{
    if(m.x>=n.x)
        cout<<"Max:"<< m.x;
    else
        cout<<"Max:"<<n.x;
}

int main()
{
    ABC abc;
    abc.setvalue(10);

    XYZ xyz;
    xyz.setvalue(20);

    Max(xyz,abc);
}

