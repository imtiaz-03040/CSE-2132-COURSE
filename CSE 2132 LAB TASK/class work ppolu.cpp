#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    int id;
    string name;

public:
    void set_person(int i, string n)
    {
        id = i;
        name = n;
    }

    void show_person()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }

};
class account:virtual public person
{
private:
    int balance;

public:
    void set_balance(int b)
    {
        balance = b;
    }

    void show_balance()
    {
        cout << "Balance : " << balance << endl;
    }


};
class admin: virtual public person
{

private:
    string role;

public:
    void set_role(string r)
    {
        role = r;
    }

    void show_role()
    {
        cout << "Role : " << role << endl;
    }
};
class master: public account,public admin
{
public:
    void show_master()
    {
        show_person();
        show_balance();
        show_role();
    }

};
int main()
{
    master m;
    m.set_person(2303040, "Imtiaz");
    m.set_balance(5000);
    m.set_role("Manager");

    m.show_master();


    return 0;
}