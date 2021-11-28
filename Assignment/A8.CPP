#include <istream>
#include <ostream>
#include <conio.h>
class date
{
	int dd, mm, yy;

public:
	date()
	{
		dd = 1;
		mm = 1;
		yy = 2000;
	}
	friend void operator++(date &d);
	friend istream &operator>>(istream &input, date &d);
	friend ostream &operator<<(ostream &ouput, date &d);
};
istream &operator>>(istream &input, date &d)
{
	input >> d.dd;
	input >> d.mm;
	input >> d.yy;
	return input;
}
ostream &operator<<(ostream &output, date &d)
{
	cout << "Date:" << endl;
	if (d.yy >= 2000 && d.yy <= 2100)
	{
		switch (d.mm)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if (d.dd >= 1 && d.dd <= 31)
				cout << d.dd << "/" << d.mm << "/" << d.yy << endl;
			else
				cout << "\nDate is invalid\n";
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if (d.dd >= 1 && d.dd <= 30)
				cout << d.dd << "/" << d.mm << "/" << d.yy << endl;
			else
				cout << "\nDate is invalid\n";
			break;
		}
		case 2:
		{
			if (d.yy % 4 == 0)
			{
				if (d.dd >= 1 && d.dd <= 29)
					cout << d.dd << "/" << d.mm << "/" << d.yy << endl;
				else
					cout << "\nDate is invalid\n";
				break;
			}
			else
			{
				if (d.dd >= 1 && d.dd <= 28)
					cout << d.dd << "/" << d.mm << "/" << d.yy << endl;
				else
					cout << "\nDate is invalid\n";
				break;
			}
		}
		}
	}
	else
		cout << "The date is invalid";
	return output;
}
void operator++(date &d)
{
	switch (d.mm)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	{
		if (d.dd == 31)
		{
			d.dd = 1;
			d.mm = ++d.mm;
			break;
		}
		else
		{
			d.dd++;
			break;
		}
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (d.dd == 30)
		{
			d.dd = 1;
			d.mm = ++d.mm;
			break;
		}
		else
		{
			d.dd++;
			break;
		}
	}
	case 12:
	{
		if (d.dd == 31)
		{
			d.dd = 1;
			d.mm = 1;
			d.yy = ++d.yy;
			break;
		}
		else
		{
			d.dd++;
			break;
		}
	}
	case 2:
	{
		if (d.dd == 29)
		{
			d.dd = 1;
			d.mm = ++d.mm;
			break;
		}
		else if (d.dd == 28)
		{
			if (d.yy % 4 == 0)
			{
				d.dd = ++d.dd;
				break;
			}
			else
			{
				d.dd = 1;
				d.mm = ++d.mm;
				break;
			}
		}
		else
		{
			d.dd = ++d.dd;
			break;
		}
	}
	default:
		cout << "Enter a valid date" << endl;
	}
}
int main()
{
	date d;
	clrscr();
	cout << "Enter the date" << endl;
	cin >> d;
	cout << d;
	cout << "\nAfter increment :" << endl;
	++d;
	cout << d;
	return 0;
}