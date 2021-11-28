#include<iostream.h>
#include<conio.h>
class time
{
	int m,h;
	public:
		void get()
		{
			cout<<"Enter timr in hour & minutes"<<endl;
			cin>>h >>m;
		}
		void put()
		{
			cout<<"Time is: "<<h<<":"<<m<<endl;
		}
		int operator++()
		{
			m++; h++;
			return (h,m);
		}
		time operator+(time t)
		{
			time temp;
			temp.h = h + t.h;
			temp.m = m + t.m;
			return temp;
		}
};
void main()
{
	time t1,t2,t3;
	clrscr();
	t1.get(); t2.get();
	t1.put(); t2.put();
	t3=t1+t2;
	++t1; ++t2;
	t1.put();
	t2.put();
	t3.put();
	getch();
}