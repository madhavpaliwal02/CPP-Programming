#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class complex
{

public:
    int real, imag;
    void get(int a, int b)
    {
        real = a;
        imag = b;
    }
    void put()
    {
        cout << "Sum is " << real + imag << endl;
    }
    complex()
    {
        real = 5;
        imag = 8;
        cout << "Sum is " << real + imag << endl;
    }
};
int main()
{
    complex c;
    complex *ptr;
    ptr = &c;
    c.get(5, 9);
    c.put();
    ptr->get(8, 1);
    ptr->put();
    ptr->real;
    return 0;
}
// typedef void (*fptr)(int a, int b);
// void add(int a, int b)
// {
//     cout << "Add is : " << a + b;
// }

// int main()
// {
//     void (*ptr)(int, int);
//     ptr = &add;
//     (*ptr)(2,4);
//     return 0;
// }
/*int main()
{
    string a="madhav paliwal";
    string *ptr;
    ptr=&a;
    cout << "A = " << a << endl;
    cout << "Pointer ptr = " << *ptr << endl;
}
int main()
{
    char a[] = "m";
    char *ptr;
    ptr = a;
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        cout << "A = " << a[i] << i[a] << *(a + i) << endl;
    }
    for (int i = 0; i < len; i++)
    {
        cout << "A through ptr = " << *ptr << endl;
        ptr++;
    }
    return 0;
}
int main()
{
    float a = 15.2;
    float *ptr, **ptr1;
    ptr = &a;
    ptr1 = &ptr;
    cout << "A = " << a << endl;
    cout << "Pointer ptr = " << *ptr << endl;
    cout << "Pointer ptr1 = " << **ptr1 << endl;
    cout << "address of A = " << &a << endl;
    cout << "address of A through Pointer ptr = " << ptr << endl;
    cout << "address of A through Pointer ptr1 = " << *ptr1 << endl;
    cout << "address of Pointer ptr = " << &ptr << endl;
    cout << "address of Pointer ptr through ptr1 = " << ptr1 << endl;
    cout << "address of Pointer ptr1 = " << &ptr1 << endl;
    return 0;
}*/