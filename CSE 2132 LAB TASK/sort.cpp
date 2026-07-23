#include <iostream>
using namespace std;

class circuit
{
public:
    int R1, R2, R3;
    float EqR;

    float equiv(int a, int b, int c)
    {
        R1 = a;
        R2 = b;
        R3 = c;
        EqR = R1 + ((float)(R2 * R3) / (R2 + R3));
        return EqR;
    }
};

int main()
{
    int n = 4;
    circuit c[4];

    c[0].equiv(10, 11, 12);
    c[1].equiv(7, 8, 9);
    c[2].equiv(4, 5, 6);
    c[3].equiv(1, 2, 3);

    // Selection sort based on EqR
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (c[j].EqR < c[minimum].EqR)
            {
                minimum = j;
            }
        }
        swap(c[i], c[minimum]);
    }

    // Output results
    cout << "Sorted Equivalent Resistances:\n";
    for (int i = 0; i < n; i++)
    {
        cout << c[i].EqR << endl;
    }

    return 0;
}
