#include <iostream>
using namespace std;

class DM
{
    int cm;
    float m;

public:
    void getDM()
    {
        cout << "Enter distance in meter & centimeter : ";
        cin >> m >> cm;
    }
    void putDM()
    {
        cout << "\nDistance is " << m << "." << cm;
    }

    void operator+(DM &d)
    {
        DM temp;
        int tcm;
        temp.cm = cm + d.cm;
        if (temp.cm >= 100)
        {
            tcm = temp.cm / 100;
            temp.cm = temp.cm % 100;
        }
        temp.m = m + d.m + tcm;
        cout << "Sum of two DM objects in m's & cm's is : " << temp.m << "." << temp.cm;
    }
};

class DB
{
    int in;
    float ft;

public:
    void getDB()
    {
        cout << "Enter distance in foot & inches : ";
        cin >> ft >> in;
    }
    void putDB()
    {
        cout << "\nDistance is " << ft << "." << in;
    }
    void operator+(DB &d)
    {
        DB temp;
        int tin;
        temp.in = in + d.in;
        if (temp.in >= 12)
        {
            tin = temp.in / 12;
            temp.in = temp.in % 12;
        }
        temp.ft = ft + d.ft + tin;
        cout << "Sum of two DB objects in ft's & in's is : " << temp.ft << "." << temp.in;
    }
};

int main()
{
    system("cls");

    DM d1, d2;
    // d1.getDM();
    // d2.getDM();
    // d1 + d2;
   
    DB d3, d4;
    // d3.getDB();
    // d4.getDB();
    // d3 + d4;
    return 0;
}