#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("sample.txt");

    string name;
    cout << "Enter your name : ";
    cin >> name;

    out << "My name is " + name;
    out.close();

    ifstream in("sample.txt");
    string content;
    getline(in, content);
    cout << content;
    
    return 0;
}