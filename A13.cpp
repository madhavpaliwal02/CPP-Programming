#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class bankAcc
{
    int accNo;
    float bal = 0;
    string name;
    string type;

public:
    void get()
    {
        cout << "Enter name :" << endl;
        getline(cin, name);
        cout << "Enter type of the account (Savings) :" << endl;
        getline(cin, type);
        cout << "Enter account number :" << endl;
        cin >> accNo;
        cout << "Enter initial amount to deposit :" << endl;
        cin >> bal;
    }
    void display()
    {
        system("cls");
        cout << "Details of the account holder" << endl;
        cout << "Name is : " << name << endl;
        cout << "Account no is : " << accNo << endl;
        cout << "Type of account is : " << type << endl;
        cout << "Balance in the account is : Rs" << bal << endl;
    }
    void deposit()
    {
        system("cls");
        int b;
        cout << "Enter a amount to deposit :" << endl;
        cin >> b;
        cout << "After deposit balance in the account is : Rs" << bal + b << endl;
    }
    void withdraw()
    {
        system("cls");
        int x;
        cout << "Initial balance in the account is : Rs" << bal << endl;
        cout << "Enter a amount to withdraw :" << endl;
        cin >> x;
        bal = bal - x;
        cout << "After withdraw remaining balance in the account is : Rs" << bal << endl;
    }
};
int main()
{
    bankAcc b;
    b.get();
    b.display();
    int x;
    cout << endl
         << endl;
    cout << "Enter a no" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        b.deposit();
        break;
    case 2:
        b.withdraw();
        exit(0);
        break;
    default:
        cout << "Enter a valid no" << endl;
        break;
    }
    return 0;
}