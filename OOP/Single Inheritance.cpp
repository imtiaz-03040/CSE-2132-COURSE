#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll: ";
        cin >> roll;
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

class Result : public Student
{
private:
    float marks;

public:
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void showResult()
    {
        showData();
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.getData();
    r.getMarks();

    cout << "\nStudent Information\n";
    r.showResult();

    return 0;
}
