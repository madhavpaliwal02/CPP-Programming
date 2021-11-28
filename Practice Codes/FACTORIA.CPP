#include<stdio.h>
#include<conio.h>
void main()
{
 int n,f=0;
 printf("\n enter a no.");
 scanf("%d",&n);
 f=n;
 for(int i=1;i<n;i++)
 {
	f=f*i;
 }
 printf("\n factorial of %d is %d",n,f);
getch();
}

