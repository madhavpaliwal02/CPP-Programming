#include<iostream.h>
#include<conio.h>
class student
{
	int rollno;
	char sname[20];
	float eng,math,sci,total;
	public:
		void get()
		{
			cout<<"Enter student name"<<endl;
			cin>>sname;
			cout<<"Enter roll no"<<endl;
			cin>>rollno;
			cout<<"Enter marks of english, maths, science"<<endl;
			cin>>eng>>math>>sci;
		}
		void display()
		{
			cout<<"student name: "<<sname<<endl;
			cout<<"roll no: "<<rollno<<endl;
			cout<<"marks in english is: "<<eng<<endl;
			cout<<"marks in maths is: "<<math<<endl;
			cout<<"marks in science is: "<<sci<<endl;
			cout<<"total marks are: "<<eng+math+sci;
		}
};
void main()
{
	student s;
	clrscr();
	s.get();
	s.display();
	getch();
}