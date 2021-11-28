#include<stdio.h>
#include<conio.h>
void main()
{
int x,n=1,t;
clrscr();
printf("enter a no");
scanf("%d",&x);
while(n<=x) {
for(int i=1;i<=10;i++) {
t=n*i;
printf("\n %d*%d=%d",n,i,t);
}
n++;
}
getch();
}