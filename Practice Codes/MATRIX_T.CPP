#include<stdio.h>
#include<conio.h>
void main()
{
int x[2][2],i,j,t[2][2];
clrscr();
printf("\nenter elements of A");
for(i=0;i<2;i++) {
for(j=0;j<2;j++) {
scanf("%d",&x[i][j]);
}
}
for(i=0;i<2;i++) {
for(j=0;j<2;j++) {
t[i][j]=x[j][i];
printf("\n%d",t[i][j]);
}
}
getch();
}