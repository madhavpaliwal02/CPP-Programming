#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class employee
{
    int age = 20;

public:
    string name = "Madhav";
    virtual void put() = 0;
    // {
    //     cout << "Details f the employee : " << endl;
    //     cout << "Name is : " << name << endl;
    //     cout << "Age is : " << age << endl;
    // }
};
class programmer : virtual public employee
{
    char grade = 'A';

public:
    int salary = 500;
    void put()
    {
        cout << "salary is : " << salary << endl;
        cout << "grade is : " << grade << endl;
    }
};
class coder : public virtual employee
{
    string jobArea = "Indore";
    int salary = 25000;

public:
    void put()
    {
        cout << "Job area is : " << jobArea << endl;
        cout << "Bank balance is : " << salary << endl;
    }
};
class manager : public programmer, virtual public coder
{
    int salary = 100;
    string dep = "IIPS";
    int timing = 4;

public:
    string name = "Paliwal";
    void put()
    {
        cout << "Name is : " << name << endl;
        cout << "salary is : Rs" << salary << endl;
        cout << "department is : " << dep << endl;
        cout << "timing is : " << timing << " hrs" << endl;
    }
};
int main()
{
    system("cls");
    // employee e;
    employee *e1, *e2, *e3;
    programmer p;
    coder c;
    manager m;
    e1 = &p;
    e2 = &c;
    e3 = &m;
    e1->put(); // progrmmer put func
    e2->put(); // coder put func
    e3->put(); // manager put func
    return 0;
}