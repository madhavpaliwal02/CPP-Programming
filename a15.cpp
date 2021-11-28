#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class staff
{
    string name;
    int age;

public:
    void sget()
    {
        cout << "----------- STAFF CLASS -----------" << endl;
        cout << "Enter details of the staff";
        cout << "\nName is : ";
        cin >> name;
        cout << "Age is : ";
        cin >> age;
    }
    void sput()
    {
        cout << "\nDetails of the staff" << endl;
        cout << "Name is : " << name << endl;
        cout << "Age is : " << age;
    }
};

class teacher : public staff
{
    string sub[5];
    int pubYear, n;

public:
    void tcget()
    {
        cout << "\n\n----------- TEACHER CLASS -----------" << endl;
        cout << "Enter no of sub to enter : ";
        cin >> n;
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter name of sub " << i << " : ";
            cin >> sub[i];
        }
        cout << "\nEnter pubication year : ";
        cin >> pubYear;
    }
    void tcput()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "\nSub " << i << " " << sub[i];
        }
        cout << "\n\nPubication year is : " << pubYear;
    }
};

class officer : public staff
{
    char g;

public:
    void oget()
    {
        cout << "\n\n----------- OFFICER CLASS -----------" << endl;
        cout << "Enter grade : ";
        cin >> g;
    }
    void oput()
    {
        cout << "\nGrade is : " << g;
    }
};

class typist : public staff
{
    int speed;

public:
    void tyget()
    {
        cout << "\n\n----------- TYPIST CLASS -----------" << endl;
        cout << "Enter speed of typist : ";
        cin >> speed;
    }
    void typut()
    {
        cout << "\nSpeed is : " << speed;
    }
};

class casual : public typist
{
    int dailyWages;

public:
    void cget()
    {
        cout << "\n\n----------- CASUAL CLASS -----------" << endl;
        cout << "Enter daily wages : ";
        cin >> dailyWages;
    }
    void cput()
    {
        cout << "\nDaily Wages is : " << dailyWages;
    }
};

class regular : public typist
{
};

int main()
{
    system("cls");
    staff s;
    teacher tc;
    typist ty;
    officer o;
    casual c;

    s.sget();
    s.sput();
    ty.tyget();
    ty.typut();
    o.oget();
    o.oput();
    tc.tcget();
    tc.tcput();
    c.cget();
    c.cput();
    return 0;
}