#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string pname[10];
    int trun[10], inn[10];
    float bavg[10];
    for (int i = 1; i <= 1; i++)
    {
        cout << "\nEnter " << i << " Player's Name : ";
        cin >> pname[i];
        cout << "\nEnter total runs : ";
        cin >> trun[i];
        cout << "\nEnter innings : ";
        cin >> inn[i];
        bavg[i] = trun[i]/(float)inn[i];
    }
    cout << "\nPlayer's Name    Runs    Innings     Batting Avg";
    for (int i = 1; i <= 1; i++)
    {
        cout << endl;
        cout << pname[i] << "           " << trun[i] << "       " << inn[i] << "            " << bavg[i];
    }
    return 0;
}