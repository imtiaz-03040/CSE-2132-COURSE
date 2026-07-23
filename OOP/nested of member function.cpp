#include<iostream>
using namespace std;
class Set
{
    int m,n;
public:
    void input(void);
    void display(void);
    int largest(void);
};
void Set::input(void)
{
    cout<<" Input values of m&n:";
    cin>>m>>n;
}
int Set::largest(void)
{
    if(m>=n)
       return m;
    else
       return n;
}
void Set::display()
{
    cout<<"largest value ="<<largest();
}
int main()
{
    Set A;
    A.input();
    A.display();
}
