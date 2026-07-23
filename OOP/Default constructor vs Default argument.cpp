#include<iostream>
using namespace std;
class set
{
    int m;
public:
    //set(int i=56){m=i;}
    set(){m=10;}
    void display()
    {
        cout<<m;
    }
};
int main()
{
    set B;
    B.display();

}
