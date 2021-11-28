#include <iostream>
using namespace std;

class bank
{
    string name, type;
    long int acc_no;
    long double bal = 0;

public:
    bank()
    {
        name = "Madhav Paliwal";
        type = "Savings";
        acc_no = 487803649;
        bal = 50000.00;
    }

    void get()
    {
        cout << "\nEnter A/c no : ";
        cin >> acc_no;
        cout << "\nEnter name : ";
        getline(cin, name);
        cout << "\nEnter initial balance : ";
        cin >> bal;
    }
    void display()
    {
        system("cls");
        cout << "Name : " << name << endl;
        cout << "\nA/c no : " << acc_no << endl;
        cout << "\nType : " << type << endl;
        cout << "\nInitial balance : " << bal;
    }
};

int main()
{
    system("cls");
    int limit = 0;
    cout << "Enter limit for persons : ";
    cin >> limit;

    bank b[100];

    for (int i = 0; i < limit; i++)
    {
        b[i].get();
        b[i].display();
    }

    // b.get();
    // b.display();
    return 0;
}