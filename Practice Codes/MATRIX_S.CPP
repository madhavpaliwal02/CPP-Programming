#include<stdio.h>
#include<conio.h>
void main()
{
int x[2][2],y[2][2],i,j,sum=0,sub=0;
clrscr();
printf("\nenter elements of A");
for(i=0;i<2;i++) {
for(j=0;j<2;j++) {
scanf("%d",&x[i][j]);
}
}
printf("\nenter elements of B");
for(i=0;i<2;i++) {
for(j=0;j<2;j++) {
scanf("%d",&y[i][j]);
}
}
for(i=0;i<2;i++) {
for(j=0;j<2;j++) {
sum=x[i][j]+y[i][j];
sub=x[i][j]-y[i][j];
printf("\n%d\t%d",sum,sub);
}
}
getch();
}