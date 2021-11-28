#include <iostream>
using namespace std;
// inline int sum(int a, int b)
// {
//     return (a + b);
// }
int main()
{
    system("cls");
    int a;
    float b;
    // cout << "Enter integer : ";
    // cin >> a;
    // cout << "Enter float : ";
    // cin >> b;
    int *ptr1 = new int(10);
    float *ptr2 = new float(15);
    // ptr = &;
    // cout << "a " << a;
    // cout << "\nb " << b;
    cout << "\nptr1 " << *ptr1;
    cout << "\nptr2 " << *ptr2;
    cout << "\nptr1 " << ptr1;
    cout << "\nptr2 " << ptr2;
    // cout << "sum : " << sum(a, b);
    return 0;
}