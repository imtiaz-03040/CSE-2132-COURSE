#include<iostream>
using namespace std;
class Polygon
{
protected:
    int width,height;
public:
    void set_values(int a, int b)
    {
        width=a;
        height=b;
    }
    virtual int area (void)=0;
    void printarea(void)
    {
        cout<<this->area()<<endl;
    }
};
class Rectangle : public Polygon
{
public:
    int area(void)
    {
        return(width*height);
    }
};
class Triangle: public Polygon
{
public:
    int area(void)
    {
        return(width*height)/2;
    }
};

int main()
{
    Polygon* ppoly1 = new Rectangle;
    Polygon* ppoly2 = new Triangle;
    ppoly1->set_values(4,5);
    ppoly2->set_values(4,5);
    ppoly1->printarea();
    ppoly2->printarea();
    delete ppoly1;
    delete ppoly2;
    return 0;

}
