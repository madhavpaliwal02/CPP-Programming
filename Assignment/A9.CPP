#include<iostream.h>
#include<conio.h>
class student
{
	int rollno,markst[5],marksp[5];
	char enrollno[10],grade,name[30];
	public:
		student()
		{
			for(int i=0; i<5; i++)
			{
			 marksp[i]=0;	 markst[i]=0;
			}
		}
		friend istream & operator>>(istream &input, student &s);
		friend ostream & operator<<(ostream &output, student &s);
};
istream & operator>>(istream &input, student &s)
{
	int x=1, y=1;
	cout<<"Enter the name:"<<endl; input>>s.name;
	cout<<"Enter the enrollment no:"<<endl; input>>s.enrollno;
	cout<<"Enter the theory marks in 5 subjects:"<<endl;
	for(int i=0; i<=4; i++)
	{
		cout<<"Subject "<<x<<" :  "; x++;
		input>>s.markst[i];
	}
	cout<<"Enter the practical marks in 5 subjects:"<<endl;
	for(int j=0; j<5; j++)
	{
		cout<<"Subject "<<y<<" :  "; y++;
		input>>s.marksp[j];
	}
	return input;
}
ostream & operator<<(ostream &output, student &s)
{
	int x=1,y=1;
	char g;
	cout<<"///////////////////// MARKSHEET ////////////////////\n";
	cout<<"\t\tName: "<<s.name<<endl;
	cout<<"\t\tEnrollment no: "<<s.enrollno<<endl;
	cout<<"\t\tTheory marks in 5 subjects:"<<endl;
	for(int i=0; i<=4; i++)
	{
		cout<<"\t\tSubject "<<x<<" : "; x++;
		cout<<s.markst[i];
		if(s.markst[i]>=63)  {s.grade='A';}
		if(s.markst[i]<63)   {s.grade='B';}
		if(s.markst[i]<50)   {s.grade='C';}
		if(s.markst[i]<35)   {s.grade='D';}
		cout<<"\tGrade: "<<s.grade<<endl;
	}
	cout<<"\t\tPractical marks in 5 subjects:"<<endl;
	for(int j=0; j<5; j++)
	{
		cout<<"\t\tSubject "<<y<<" : "; y++;
		cout<<s.marksp[j]<<endl;
	}
	return output;
}
void main()
{
	student s;
	clrscr();
	cout<<"Enter the details of student: "<<endl;
	cin>>s;
	cout<<s;
	getch();
}