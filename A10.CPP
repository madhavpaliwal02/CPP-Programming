#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class cal
{
	int m, cm;

public:
	cal operator+(cal &c);
	cal operator-(cal &c);
	friend istream &operator>>(istream &input, cal &c);
	friend ostream &operator<<(ostream &ouput, cal &c);
};
istream &operator>>(istream &input, cal &c)
{
	input >> c.m;
	input >> c.cm;
	return input;
}
ostream &operator<<(ostream &output, cal &c)
{
	int rem = 0, remm = 0;
	if (c.cm >= 100)
	{
		rem = c.cm % 100;
		remm = c.cm / 100;
		c.cm = rem;
		c.m = c.m + remm;
		cout << c.m << " metre " << c.cm << " centimetre" << endl;
	}
	else
		cout << c.m << " metre " << c.cm << " centimetre" << endl;
	return output;
}
cal cal::operator+(cal &c)
{
	cal sum;
	sum.m = m + c.m;
	sum.cm = cm + c.cm;
	return sum;
}
cal cal::operator-(cal &c)
{
	cal sub;
	sub.m = m - c.m;
	sub.cm = cm - c.cm;
	return sub;
}
void main()
{
	cal c, d;
	cal sum, sub;
	char x;
	clrscr();
	cout << "Enter the 1st distance in meter and centimeter:" << endl;
	cin >> c;
	cout << "Enter the 2nd distance in meter and centimeter:" << endl;
	cin >> d;
	cout << "The 1st entered distance is:" << endl;
	cout << c;
	cout << "The 2nd entered distance is:" << endl;
	cout << d;
	printf("Enter + for addition\nEnter - for substraction\n");
	scanf("%c", &x);

	switch (x)
	{
	case '+':
	{
		cout << "The addition of two entered distance is:" << endl;
		sum = c + d;
		cout << sum;
		break;
	}
	case '-':
	{
		cout << "The substraction of two entered distance is:" << endl;
		sub = c - d;
		cout << sub;
		break;
	}
	default:
		cout << "Enter a valid symbol" << endl;
	}
	getch();
}