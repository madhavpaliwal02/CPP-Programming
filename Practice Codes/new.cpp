#include <iostream>
using namespace std;
int main()
{
    char name[30];
    cout << "Enter Your Name : ";
    cin.getline(name,30);
    cout << "Name : " << name;
    return 0;
}