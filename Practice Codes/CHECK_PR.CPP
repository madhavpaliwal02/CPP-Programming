#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(int i=2;i<n;i++)
{
 if(n%i==0) {
 printf("not prime");
 }
 else {
printf("prime");
}
break;
}
getch();
}