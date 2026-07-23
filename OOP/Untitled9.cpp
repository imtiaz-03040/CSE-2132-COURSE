#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    int n;              // number of theory courses
    float marks[10];    // marks array
    float avg;
    float cse2131;      // mark of CSE 2131

    void input() {
        cout << "Enter roll: ";
        cin >> roll;



        float sum = 0;
        cout << "Enter marks:\n";
        for (int i = 0; i < n; i++) {
            cin >> marks[i];
            sum += marks[i];
        }

        avg = sum / n;

        cout << "Enter CSE 2131 mark: ";
        cin >> cse2131;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
     cout << "Enter number of courses: ";
        cin >> n;

    Student s[50];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s[i].input();
    }

    // Step 1: Find highest and second highest average
    float first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (s[i].avg > first) {
            second = first;
            first = s[i].avg;
        } else if (s[i].avg > second && s[i].avg < first) {
            second = s[i].avg;
        }
    }

    // Step 2: Among second highest, find highest CSE 2131 mark
    int index = -1;
    float maxCSE = -1;

    for (int i = 0; i < n; i++) {
        if (s[i].avg == second) {
            if (s[i].cse2131 > maxCSE) {
                maxCSE = s[i].cse2131;
                index = i;
            }
        }
    }

    // Output
    if (index != -1) {
        cout << "\nResult:\n";
        cout << "Roll: " << s[index].roll << endl;
        cout << "Average: " << s[index].avg << endl;
    }

    return 0;
}
