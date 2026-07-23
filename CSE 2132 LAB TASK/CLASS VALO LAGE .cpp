#include <iostream>
#include <cmath>

using namespace std;

template <class T>
class oneD
{
protected:
    T x;

public:
    oneD(T i)
    {
        x = i;
    }

    virtual T distance()
    {
        return abs(x);
    }
};

template <class T>
class twoD : public oneD<T>
{
protected:
    T y;

public:
    twoD(T i, T j) : oneD<T>(i)
    {
        y = j;
    }

    T distance()
    {
        return sqrt((this->x * this->x) + (y * y));
    }
};

template <class T>
class threeD : public twoD<T>
{
    T z;

public:
    threeD(T i, T j, T k) : twoD<T>(i, j)
    {
        z = k;
    }

    T distance()
    {
        return sqrt((this->x * this->x) +
                    (this->y * this->y) +
                    (z * z));
    }
};

int main()
{
    oneD<int> a(2);
    twoD<int> b(3, 6);
    threeD<int> c(4, 8, 9);

    cout << a.distance() << endl;
    cout << b.distance() << endl;
    cout << c.distance() << endl;

    return 0;
}
