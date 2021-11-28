#include<iostream.h>
#include<conio.h>
class matrix
{
	int a[2][2];
	public:
		void get()
		{
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
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
				cout<<a[i][j]<<" ";
			 }
			 cout<<endl;
			}
		}
		void operator +(matrix m)
		{
			matrix s;
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
				s.a[i][j]=a[i][j]+m.a[i][j];
			 }
			}
			cout<<"\nThe sum of two matrix is:"<<endl;
			s.put();
		}
		void tran()
		{
			int t;
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
			  if(i>j)
			   {
			    t = a[i][j];
			    a[i][j] = a[j][i];
			    a[j][i] = t;
			   }
			 }
			}
		}
		friend void mul(matrix m1, matrix m2)
		{
			matrix m3;
			for(int i=0; i<2; i++)
			{
			 for(int j=0; j<2; j++)
			 {
			  m3.a[i][j]=0;
			  for(int k=0; k<2; k++)
			  {
			   m3.a[i][j]=m3.a[i][j]+(m1.a[i][k]*m2.a[k][j]);			  }
			 }
			}
			cout<<"\nMul is:"<<endl;
			m3.put();
		}
};
void main()
{
	matrix m1, m2, m3, m4;
	clrscr();

	cout<<"\nEnter 1st matrix"<<endl;
	m1.get();
	cout<<"\nEnter 2nd matrix"<<endl;
	m2.get();

	cout<<"\nEntered 1st matrix is:"<<endl;
	m1.put();
	cout<<"\nEntered 2nd matrix is:"<<endl;
	m2.put();
	int x;
	cout<<"Enter 1 for add, 2 for multiply, 3 for transpose\n";
	cin>>x;
	switch(x)
	{
		case 1:
		m1+m2;
		break;
		case 2:
		m1.tran();
		m2.tran();
		cout<<"\nThe transpose of 1st matrix is:"<<endl;
		m1.put();
		cout<<"\nThe transpose of 2nd matrix is:"<<endl;
		m2.put();
		break;
		case 3:
		mul(m1,m2);
		break;
	}
	getch();
}