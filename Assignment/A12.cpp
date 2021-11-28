#include <iostream>
#include <conio.h>
using namespace std;

class shape
{
public:
    float var1, var2;
    void get_data()
    {
        cout << "\nEnter the details of two variables" << endl;
        cin >> var1;
        cin >> var2;
    }
    virtual void display_area()
    {
        cout << "\nArea of the shape is : ";
    }
};

class triangle : public shape
{
public:
    float area = ((1 / 2) * var1 * var2);
    void display_area()
    {
        cout << "\nArea of the triangle is : " << area;
    }
};

class rectangle : public shape
{
public:
    float arear = (var1 * var2);
    void display_area()
    {
        cout << "\nArea of the rectangle is : " << arear;
    }
};

int main()
{
    system("cls");
    // shape *s1, *s2;
    triangle t;
    rectangle r;
    shape s;
    s.get_data();
    // t.get_data();
    t.display_area();
    // r.get_data();
    r.display_area();
    return 0;
}