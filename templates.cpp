#include <iostream>
using namespace std;

/*template <class T, class U>

class vector
{
    T m;

public:
    vector(T m)
    {
        this->m = m;
        cout << "\nCongratulations !!!";
        cout << "\nThe value is : " << this->m;
    }
};*/ 

template <typename T>

T sum(T num1, T num2)
{ return num1+num2;}

int main()
{
    // vector<int> vec1(20);
    // vector<float> vec2(30.045);
    // vector<char> vec3('A');
    
    float add = sum(10.02,20.97);
    cout<<"The sum is : "<<add;
    return 0;
}