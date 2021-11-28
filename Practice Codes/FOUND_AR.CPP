#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[5];
 clrscr();
 for(int i=0;i<5;i++) {
  printf("\n enter a no.");
  scanf("%d",&arr[i]);
 }
 int n,f=0;
 printf("\n enter a no. which has to check");
 scanf("%d",&n);
 for(i=0;i<5;i++) {
  if(arr[i]==n) {
  printf("\n %d no is found",arr[i]);
  f=1;
  }
 }
 if(f==0)
  printf("\n %d no is not found",arr[i]);
 getch();
}