#include<iostream>
using namespace std;
class Person
{
    string name;
public:
    int age;
    void set_name(string b)
    {
        name=b;

    }
    string out_name()
    {
        return name;
    }

};
class Account: virtual public Person
{
public:
    int acc_num;
    void set_accnum(int x)
    {
        acc_num=x;
    }
    void print_accnum(int x)
    {
        cout<<"Account name:";
    }
    cout<<out_name()<<endl;
    cout<<"age:"<<age<<endl;
};

class admin: virtual public Person
{
public:
    int age;
    string pass;
    void set_pass(int x)
    {
        pass=out_name();

    }

};
class master:public account, public admin
{
public:
    void print_pass()
    {
        cout<< pass<<endl;
    }
};
int main()
{
    master m1;
    m1.set_name(."Imtiaz");
    m1.set_accnum("2303040190");
    m1.set_age
    cout<<"Name:"<<m1.out_name()<<endl;
    cout<<"age:"<<m1.age<<endl;
    cout<<m1.set_accnum();
    m1.print_pass();
}
