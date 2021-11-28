#include<iostream.h>
#include<conio.h>
class matrix
{
	int a[2][2], m;
	public:
		void get()
		{
			cout<<"\nEnter "<<m <<" matrix"<<endl;
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
				cin>>a[i][j];
			 }
			}
		}
		void put()
		{
			cout<<"\nEntered matrix is "<<endl;
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
				cout<<a[i][j]<<" ";
			 }
			 cout<<endl;
			}
		}
		void operator+(matrix m)
		{
			int temp[2][2];
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
				temp[i][j]=a[i][j]+m.a[i][j];
			 }
			}
			cout<<"\nSum is: \n";
			for(int x=0; x<2; x++)
			{
			 for(int y=0; y<2; y++)
			 {
				cout<<temp[x][y]<<" ";
			 }
			 cout<<endl;
			}
		}
};
void main()
{
	matrix m1, m2;
	clrscr();
	m1.get();
	m2.get();
	m1.put();
	m2.put();
	m1+m2;
	getch();
}