#include<stdio.h>
#include<conio.h>
void main()
{
 int n,smod=0,smev=0;
 printf("enter a limit");
 scanf("%d",&n);
 for(int i=1;i<=n;i++) {
  if(i%2==0) {
  smod=smod+i;
  printf("\t even no are %d",smod);
  }
  if(i%2!=0) {
  smev=smev+i;
  printf("\n odd no are %d",smev);
  }
 }
 getch();
}