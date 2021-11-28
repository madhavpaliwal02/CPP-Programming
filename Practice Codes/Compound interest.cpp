#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    system("cls");
    int p, t;
    float r, ci = 0;
    cout << "Enter principal value of amount in Rs. : ";
    cin >> p;
    cout << "\nEnter rate in % : ";
    cin >> r;
    cout << "\nEnter time period in yrs: ";
    cin >> t;
    ci = p * pow((1 + r / 100), t) - p;
    cout << "\nCompound interest CI is : " << ci;
    cout << "\nAmount is P + CI : " << p + ci;
    return 0;
}