#include<stdio.h>
#include<conio.h>
void main()
{
int x,t;
clrscr();
printf("enter a no");
scanf("%d",&x);
for(int i=1;i<=10;i++) {
t=x*i;
printf("\n %d*%d=%d",x,i,t);
}
getch();
}