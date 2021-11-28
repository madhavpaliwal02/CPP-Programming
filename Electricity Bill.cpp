#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string name;
    int units;
    float amt = 50.00;
    cout << "\nEnter Name of User : ";
    cin >> name;
    cout << "Enter Units : ";
    cin >> units;
    if (units < 100)
    {
        amt = 0.6 * units;
    }
    if (units >= 100 && units < 300)
    {
        amt = 0.8 * units;
    }
    if (units >= 300)
    {
        amt = 0.9 * units;
    }

    cout << "Name : " << name << endl
         << "Units : " << units << endl
         << "Amount : " << amt;
    return 0;
}