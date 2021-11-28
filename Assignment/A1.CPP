#include<iostream>
#include<conio.h>
using namespace std;
class arr
{
	int a[3];
	public:
		void get()
		{
			cout<<"\nEnter the elements \n";
			for(int i=0; i<3; i++)
			{
				cin>>a[i];
			}
		}
		void put()
		{
			cout<<"Entered elements are: "<<endl;
			for(int i=0; i<3; i++)
			{
				cout<<a[i]<<endl;
			}
		}
		void maxmin();
		void sumavg();
		void search();
};
void arr::search()
{
	int n;
	cout<<"Enter a no, which has been search"<<endl;
	cin>>n;
	for(int i=0; i<3; i++)
	{
		if(a[i]==n)
			cout<<"Found";
		else
			cout<<"Not found";
	}
}
void arr::sumavg()
{
	int sum=0;
	float avg=0;
	for(int i=0; i<3; i++)
	{
		sum=sum+a[i];
	}
	avg=sum/(float)3;
	cout<<"The sum of the array elements is: "<<sum<<endl;
	cout<<"The average of the array elements is: "<<avg<<endl;
}
void arr::maxmin()
{
	int t=0; //temp
	for(int i=0; i<2; i++)
	{
	 for(int j=i+1; j<3; j++)
	 {
	  if(a[i]>a[j])
	  {
	   t=a[i];
	   a[i]=a[j];
	   a[j]=t;
	  }
	 }
	}
	cout<<"Max no in the array is: "<<a[2]<<endl;
	cout<<"Min no in the array is: "<<a[0]<<endl;
}
int main()
{
	arr a1;
	a1.get();
	a1.put();
	a1.maxmin();
	a1.sumavg();
	a1.search();
	return 0;
}