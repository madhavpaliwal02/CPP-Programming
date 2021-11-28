#include<iostream.h>
#include<conio.h>
class trip
{
	long int fno;
	float dis, fuel;
	char des[20];
	public:
		void calfuel();
		void feedinfo();
		void showinfo();
};
void trip::calfuel()
{
	if(dis<=1000)
	{
		fuel=500;
	}
	if(dis>1000 && dis<=2000)
	{
		fuel=1100;
	}
	if(dis>2000)
	{
		fuel=2200;
	}
}
void trip::feedinfo()
{
	cout<<"enter the flight no\n";
	cin>>fno;
	cout<<"enter the destination\n";
	cin>>des;
	cout<<"enter the distance\n";
	cin>>dis;
}
void trip::showinfo()
{
	cout<<"flight no: "<<fno<<endl;
	cout<<"destination is: "<<des<<endl;
	cout<<"distance is: "<<dis<<" km"<<endl;
	cout<<"fuel required: "<<fuel<<endl;
}
void main()
{
	trip t;
	clrscr();
	t.feedinfo();
	t.calfuel();
	t.showinfo();
	getch();
}