#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a[100], n, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
    cout << "Enter the no. of voters n , where n < 100" << endl;
    cin >> n;
    cout << endl;
    cout << "To vote a1 enter 1 " << endl
         << "To vote a2 enter 2 " << endl
         << "To vote a3 enter 3 " << endl
         << "To vote a4 enter 4 " << endl
         << "To vote a5 enter 5 " << endl
         << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the preffered no to vote a candidate for person " << i << " : ";
        cin >> a[i];
    }
    /*for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            a1++;
        }
        if (a[i] == 2)
        {
            a2++;
        }
        if (a[i] == 3)
        {
            a3++;
        }
        if (a[i] == 4)
        {
            a4++;
        }
        if (a[i] == 5)
        {
            a5++;
        }
    }*/
    for (int i = 1; i <= n; i++)
    {
        switch (a[i])
        {
        case 1:
            a1++;
            break;
        case 2:
            a2++;
            break;
        case 3:
            a3++;
            break;
        case 4:
            a4++;
            break;
        case 5:
            a5++;
            break;
        default:
            break;
        }
    }
    cout << endl;
    cout << "The votes for a1 are : " << a1 << endl
         << "The votes for a2 are : " << a2 << endl
         << "The votes for a3 are : " << a3 << endl
         << "The votes for a4 are : " << a4 << endl
         << "The votes for a5 are : " << a5 << endl;
    return 0;
}