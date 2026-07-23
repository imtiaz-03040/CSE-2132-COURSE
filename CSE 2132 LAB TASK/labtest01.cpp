#include<iostream>
#include<math.h>
using namespace std;
class Vector
{
    private:
    int x,y,z;
    float mag;
public:
    Vector(int X, int Y,int Z)
    {
        x=X;
        y=Y;
        z=Z;
    }
    operator float ()
    {
        float mag;
        mag=sqrt(x*x+y*y+z*z);
        return mag;
    }
    friend void mag (float mag1 ,float mag2 );

};

void mag (float mag1,float mag2)
{
    if (mag1==mag2)
    {
        cout<< 1;
    }
    else
    {
        cout<< 0;
    }
}

int main ()
{
    Vector v1(2,3,4);
    Vector v2(1,2,3);
    float mag1=v1;
    float mag2=v2;
    cout<<mag1<<endl;
    cout<< mag2<<endl;
    mag (mag1,mag2);
}
