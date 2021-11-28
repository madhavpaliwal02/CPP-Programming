#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class bankAcc
{
    int accNo;
    string name;

public:
    bankAcc()
    {
        accNo = 12345;
    }
    float bal = 0;
    void get()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter account number : ";
        cin >> accNo;
        cout << "Enter initial amount to deposit : ";
        cin >> bal;
    }
    void display()
    {
        system("cls");
        cout << "Details of the account holder" << endl;
        cout << "Name is : " << name << endl;
        cout << "Account no is : " << accNo << endl;
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
};
class sav_acct : public bankAcc
{
    int x;

public:
    sav_acct()
    {
        bal = 0;
        x = 0;
    }
    void compoundInterest()
    {
        cout << endl;
    }
    void withdraw()
    {
        system("cls");
        cout << "Initial balance in the account is : Rs" << bal << endl;
        cout << "Enter a amount to withdraw :" << endl;
        cin >> x;
        bal = bal - x;
        cout << "After withdraw remaining balance in the account is : Rs" << bal << endl;
    }
};
class cur_acct : public bankAcc
{
    string Cname;
    int CaccNo, Camt;

public:
    cur_acct()
    {
        string Cname = "madhav";
        CaccNo = 123456;
        Camt = 0;
    }
    int chkbal()
    {
        if (bal < 1000)
            return 1;
    }
    void chkBook()
    {
        system("cls");
        cout << "---------- CHEQUE BOOK ----------" << endl;
        cout << "Enter name of the A/c holder : ";
        cin >> Cname;
        cout << "A/c No : ";
        cin >> CaccNo;
        cout << "Enter amount to be paid : ";
        cin >> Camt;
        cout << endl;
        chkBookDis();
    }
    void chkBookDis()
    {
        cout << "///// DETAILS OF THE CHEQUE BOOK HOLDER /////" << endl
             << endl;
        cout << "Name of the acc holder : " << Cname << endl;
        cout << "A/c No : " << CaccNo << endl;
        cout << "Amount has to be paid : " << Camt << endl;
    }
};
int main()
{
    system("cls");
    cur_acct c;
    sav_acct s;
    int x, y, z, goBack1, goBack2;
    cout << "---------- BANKING MANAGEMENT SYSTEM ----------";
    cout << endl
         << endl;
    cout << "Enter a number to select type of acc" << endl;
    cout << "1. CURRENT ACCOUNT" << endl;
    cout << "2. SAVING ACCOUNT" << endl;
    cout << "0. EXIT" << endl;
    cout << endl;
    cin >> x;
    switch (x)
    {
    case 1: //current account
        system("cls");
        cout << "---------- CURRENT ACCOUNT ----------" << endl
             << endl;
        c.get();
        if (c.chkbal() == 1)
        {
            cout << "Amount is not sufficient" << endl;
            break;
        }
        else
            c.display();
        cout << endl;
        goBack1 = 0;
        while (1)
        {
            cout << "1. Cheque Pay" << endl;
            cout << "2. Cheque Display" << endl;
            cout << "0. EXIT" << endl;
            cin >> y;
            switch (y)
            {
            case 1:
                c.chkBook();
                break;
            case 2:
                c.chkBookDis();
                break;
            case 0:
                goBack1 = 1;
                break;
            default:
                cout << "Invalid number ! Try again";
                getchar();
                cout << endl;
            }
            if (goBack1 == 1)
            {
                break; //break the loop
            }
        }
        break;
    case 2: //savings account
        system("cls");
        cout << "---------- SAVINGS ACCOUNT ----------" << endl
             << endl;
        // s.get();
        // s.display();
        cout << endl;
        goBack2 = 0;
        while (1)
        {
            cout << "1. Compound Interest" << endl;
            cout << "2. Withdrawal" << endl;
            cout << "0. EXIT" << endl;
            cin >> z;
            switch (z)
            {
            case 1:
                s.compoundInterest();
                break;
            case 2:
                s.withdraw();
                break;
            case 0:
                goBack2 = 1;
                break;
            default:
                cout << "Invalid number ! Try again";
                getchar();
                cout << endl;
            }
            if (goBack2 == 1)
            {
                break;
            }
        }
        break;
    default:
        cout << "Invalid number ! Try again";
        getchar();
    }
    return 0;
}