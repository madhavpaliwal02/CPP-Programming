#include<iostream.h>
#include<conio.h>
class time
{
	int min,hr;
	public:
		friend int operator+();
		friend istream & operator>>(istream &input, time &t);
		friend ostream & operator<<(ostream &output, time &t);
};
istream & operator>>(istream &input, time &t)
{
	input>>t.hr;
	input>>t.min;
	return input;
}
ostream & operator<<(ostream &output, time &t)
{
	int rem_hr=0;
	float rem_min=0;
		if(t.min<10)
	       {
		cout<<"Time is: "<<t.hr<<":0"<<t.min;
	       }
		if(t.min>=60)
	       {
		 rem_min=t.min%60;
		 rem_hr=t.min/60;
		 t.hr=t.hr+rem_hr;
		 cout<<"Time is: "<<t.hr<<":"<<rem_min;
	       }
		if(t.min<60 && t.min>10)
	       {
		 cout<<"Time is: "<<t.hr<<":"<<t.min;
	       }
	       return output;
}
void main()
 {
	time t;
	clrscr();
	cout<<"Enter timr in minutes and hours:"<<endl;
	cin>>t;
	cout<<t;
	getch();
 }