#include<stdio.h>
#include<conio.h>
void main()
{
int b,p,res=1;
clrscr();
printf("enter base & power");
scanf("%d %d,&b,&p");
while(p>=0) {
res=res*b;
}
printf("result is %d",res);
getch();
}