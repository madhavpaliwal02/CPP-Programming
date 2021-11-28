#include<iostream.h>
#include<conio.h>
class distance
{
	int mtr,km;
 public:
	void get();
	void put();
	void sum();
};
 void distance::get()
 {
	cout<<"Enter distancein km "<<endl;
	cin>>km;
	cout<<"Enter distance in meter "<<endl;
	cin>>mtr;
 }
 void distance::put()
 {
	if(mtr>1000)
	{
		int rem_mtr=0,rem_km=0;
		rem_mtr=mtr%1000;
		rem_km=mtr/1000;
		km+=rem_km;
		cout<<"Distance is: "<<km<<"."<<rem_mtr<<"km"<<endl;
	}
	else
	cout<<"Distance is: "<<km<<"."<<mtr<<"km"<<endl;
 }
/* void distance::sum(km,mtr)
 {
	int s_km=0,s_mtr=0,m=mtr,km=km;
	s_km=km+d.km;
	s_mtr=mtr+d.mtr;
	if(s_mtr>1000)
	{
		int rem_mtr=0,rem_km=0;
		rem_mtr=s_mtr%1000;
		rem_km=s_mtr/1000;
		s_km+=rem_km;
		cout<<"The sum of distance is: "<<s_km<<"."<<rem_mtr<<"km"<<endl;
	}
	else
	cout<<"The sum of distance is: "<<s_km<<"."<<s_mtr<<"km"<<endl;
 } */
 void main()
 {
	distance d1,d2;
	clrscr();
	d1.get();
	d2.get();
	d1.put();
	d2.put();
     //	d1.sum(d2.km,d2.mtr);
	getch();
 }

