#include<iostream>
using namespace std;

class circuit
{

public:
    float r1,r2,r3,eqR;
    float euiv(int a,int b, int c)
    {
        r1 =a;
        r2=b;
        r3=c;
        eqR = r1+(r2*r3)/(r2+r3);
        return eqR;
    }
};

int main()
{
    int n=4;
    circuit c[4];

    c[0].euiv(10,11,12);
    c[1].euiv(7,8,9);
    c[2].euiv(4,5,6);
    c[3].euiv(1,2,3);


    for (int i =0; i<n-1; i++)
    {
        int minim= i;
        for(int j=i+1; j<n; j++)
        {
            if(c[j].eqR<c[minim].eqR)
            {
                minim = j;
            }
        }
        swap (c[i].eqR,c[minim].eqR);

    }

    for(int j=0; j<n; j++)
    {
        cout<<c[j].eqR<<" "<<endl;
    }
}
