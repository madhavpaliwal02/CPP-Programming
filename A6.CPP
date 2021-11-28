#include<iostream.h>
#include<conio.h>
class complex
{
	float real, imag;
	public:
		void get();
		void put();
		void sum(complex c1, complex c2);
};
void complex::get()
{
	cout<<"\nEnter a complex no: \n";
	cin>>real >>imag;
}
void complex::put()
{
	cout<<real<<"+i"<<imag<<endl;
}
void complex::sum(complex c1, complex c2)
{
	real = c1.real + c2.real;
	imag = c1.imag + c2.imag;
	cout<<"sum is: "<<real<<"+i"<<imag<<endl;
}
void main()
{
	complex a, b, s;
	clrscr();
	a.get();
	b.get();
	a.put();
	b.put();
	s.sum(a,b);
	s.put();
	getch();
}