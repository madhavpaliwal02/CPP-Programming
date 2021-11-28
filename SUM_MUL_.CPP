#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0;
 long int mul=1;
 clrscr();
 printf("enter a no.");
 scanf("%d",&n);
 for(int i=1;i<=n;i+=2)
 {
  if(i%2==0) {
  sum=sum+i;
   printf("\n sum of even no is %d",sum);
  mul=mul*i;
   printf("\t multiplication of even is %ld",mul);
  }
 }
 for(int j=2;j<=n;j+=2) {
  if(j%2!=0) {
  sum=sum+j;
  mul=mul*j;
  printf("\n sum of odd no is %d",sum);
  printf("\t multiplication of odd no is %ld",mul);
  }
 }
 getch();
}