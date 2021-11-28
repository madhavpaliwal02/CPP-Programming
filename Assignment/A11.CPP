#include<iostream.h>
#include<conio.h>
class time
{
	int min,hr;
	public:
		friend time operator+(time &t1, time &t2);
		friend istream & operator>>(istream &input, time &t);
		friend ostream & operator<<(ostream &output, time &t);
};
istream & operator>>(istream &input, time &t)
{
	cout<<"Enter hour: ";
	input>>t.hr;
	cout<<"Enter minute: ";
	input>>t.min;
	return input;
}
ostream & operator<<(ostream &output, time &t)
{
	int rem_hr=0;
	float rem_min=0;
		if(t.min<10)
	       {
		cout<<"Time is: "<<t.hr<<":0"<<t.min<<endl;
	       }
		if(t.min>=60)
	       {
		 rem_min=t.min%60;
		 rem_hr=t.min/60;
		 t.hr=t.hr+rem_hr;
		 cout<<"Time is: "<<t.hr<<":"<<rem_min<<endl;
	       }
		if(t.min<60 && t.min>10)
	       {
		 cout<<"Time is: "<<t.hr<<":"<<t.min<<endl;
	       }
	       return output;
}
time operator+(time &t1, time &t2)
{
	time t;
	t.hr=t1.hr+t2.hr;
	t.min=t1.min+t2.min;
	return t;
}
void main()
 {
	time t1, t2, t3;
	clrscr();
	cout<<"Enter 1st time :"<<endl;
	cin>>t1;
	cout<<"Enter 2nd time :"<<endl;
	cin>>t2;
	t3=t1+t2;
	cout<<t1;
	cout<<t2;
	cout<<"///// After sum /////"<<endl;
	cout<<t3;
	getch();
 }