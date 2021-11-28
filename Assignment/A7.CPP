#include<iostream.h>
#include<conio.h>
class rectangle
{
	float a,length, width;
	public:
		void setlength();
		void setwidth();
		void show();
		float perimeter();
		float area();
		int sameArea(rectangle);
};
void rectangle::setlength()
{
	cout<<"\nEnter length"<<endl;
	cin>>length;
}
void rectangle::setwidth()
{
	cout<<"\nEnter width"<<endl;
	cin>>width;
}
float rectangle::perimeter()
{
	float p;
	p=2*(length+width);
	return p;
}
float rectangle::area()
{
	float a;
	a=length*width;
	return a;
}
int rectangle::sameArea(rectangle r3)
{
	if(a==r3.a)
	return 1;
	else
	return 0;
}
void rectangle::show()
{
	cout<<"Entered length is: "<<length<<endl;
	cout<<"Entered width is: "<<width<<endl;
}
void main()
{
	rectangle r1, r2;
	clrscr();
	int x=0;
	float p1,p2,a1,a2;
	r1.setlength();
	r1.setwidth();
	r2.setlength();
	r2.setwidth();
	r1.show();
	r2.show();
	p1=r1.perimeter();
	cout<<"Perimeter of 1st rectangle is: "<<p1<<endl;
	p2=r2.perimeter();
	cout<<"Perimeter of 2nd rectangle is: "<<p2<<endl;
	a1=r1.area();
	cout<<"Area of 1st rectangle is: "<<a1<<endl;
	a2=r2.area();
	cout<<"Area of 2nd rectangle is: "<<a2<<endl;
	x=r1.sameArea(r2);
	if(x==1)
	cout<<"The 2 rectangles have same area\n";
	else
	cout<<"The 2 rectangles not have same area\n";
	getch();
}