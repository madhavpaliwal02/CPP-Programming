#include<iostream.h>
#include<conio.h>
class complex
{
	int x,y;
	public:
		complex() {}
		complex(int a)
		{
		 x=y=a;
		}
		complex(int real,int imag)
		{
		 x=real;
		 y=imag;
		}
		friend complex sum(complex,complex);
		friend void show(complex);
		complex(complex &m)
		{
			x=m.x;
			y=m.y;
		}
};
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	return c3;
}
void show(complex c)
{
	cout<<"sum: "<<c.x<<"+i"<<c.y<<endl;
}
void main()
{
 clrscr();
 complex A(10,20);
 complex B(50);
 complex C,F;
 C = sum(A,B);
 cout<<"A: "; show(A);
 cout<<"B: "; show(B);
 cout<<"C: "; show(C);
 complex D(C);
 cout<<"D: "; show(D);
 complex E = C;
 cout<<"E: "; show(E)
 cout<<"F: "; show(F);
 getch();
}

