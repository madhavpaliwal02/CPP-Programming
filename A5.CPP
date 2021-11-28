#include<iostream.h>
#include<conio.h>
class fun
{
	float x,y,z,v;
	public:
		void cal(float a);
		void cal(float a, float b);
		void cal(float a, float b, float c);
};
void fun::cal(float a, float b, float c)
{
	x=a; y=b; z=c;
	v=x*y*z;
	cout<<"\nVolume of cuboid is: "<<v;
}
void fun::cal(float a, float b)
{
	x=a; y=b;
	v=3.14*x*y*y;
	cout<<"\nVolume of cylinder: "<<v;
}
void fun::cal(float a)
{
	x=a;
	v=(4*3.14*x*x*x)/3;
	cout<<"\nVolume of sphere: "<<v;
}
void main()
{
	fun f;
	int x,p,q,r;
	clrscr();
	cout<<"Enter 1 for sphere, 2 for cylinder, 3 for cuboid\n";
	cin>>x;
	switch(x)
	{
		case 1:
		{
			cout<<"Sphere: Enter radius\n";
			cin>>p;
			f.cal(p);
			break;
		}
		case 2:
		{
			cout<<"Cylinder: Enter height and radius\n";
			cin>>p>>q;
			f.cal(p,q);
			break;
		}
		case 3:
		{
			cout<<"Cuboid: Enter lenght, breadth and height\n";
			cin>>p>>q>>r;
			f.cal(p,q,r);
			break;
		}
		default:
		cout<<"Invalid\n";
	}
	getch();
}