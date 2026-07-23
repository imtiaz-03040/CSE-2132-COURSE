#include<bits/stdc++.h>
using namespace std;

class Person
{
    string name;
public:

    void set_name(string b)
    {
        name =b;
    }
    string out_name()
    {
        return name;
    }

};

class account:virtual public Person
{
public:
    int ac_num;
    void set_accnum(int x)
    {
        ac_num =x;
    }

    void print_accnum()
    {
        cout<<"account name:"<<ac_num<<endl;;
    }


};

class admin:virtual public Person
{
public:

    string pass;
    void set_pass()
    {
        pass=out_name();
    }
};

class master:public account,public admin
{
public:
    void print_pass()
    {
        cout<<pass<<endl;
    }

};

int main()
{
    master m1;
    m1.set_name("Imtiaz");
    m1.set_accnum(2303040);
    m1.set_pass();
    cout<< "name:"<<m1.out_name()<<endl;

    m1.print_accnum();
    cout<<"pass:";
    m1.print_pass();

}
