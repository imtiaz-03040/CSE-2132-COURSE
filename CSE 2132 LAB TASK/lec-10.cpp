#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    string roll;

public:
    bool readFromFile(ifstream &fin)
    {
        if (fin >> name >> roll)
            return true;
        else
            return false;
    }

    void display()
    {
        cout << left << setw(15) << name << roll << endl;
    }
};

int main()
{
    ifstream fin("students.txt");

    if (!fin)
    {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    Student s;

    cout << left << setw(15) << "Name" << "Roll Number" << endl;
    cout << "-----------------------------" << endl;

    while (s.readFromFile(fin))
    {
        s.display();
    }

    fin.close();

    return 0;
}
