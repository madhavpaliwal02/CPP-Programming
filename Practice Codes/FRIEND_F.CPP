#include<iostream.h>
#include<conio.h>
class data
{
 float count;
 int m,n;
 public:
	void get()
	{
	 cout<<"enter 2 no";
	 cin>>m >>n;
	}
	friend int sum(data d);
};
int sum(data d)
{
	return (d.m+d.n);
}
void main()
{
 clrscr();
 data d;
 d.get();
 cout<<"sum is: "<<sum(d);
 getch();
}