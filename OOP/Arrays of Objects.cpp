#include<iostream>
using namespace std;
class Employee
{
    char name[30];
    float age;
public:
    void getdata(void);
    void putdata(void);
};
void Employee::getdata(void)
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
}
void Employee::putdata(void)
{
    cout<<"Name:"<<name<<"\n";
    cout<<"Age:"<<age<<"\n";
}

const int size=3;
int main()
{
    Employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"\n Details of Manager:"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<"\n Manager:"<<i+1<<"\n";
        manager[i].putdata();
    }

}

