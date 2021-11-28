#include<stdio.h>
#include<conio.h>
void main() {
long int no,rev=0,org;
int rem=0;
clrscr();
printf("enter a no");
scanf("%ld",&no);
org=no;
while(no>0) {
rem=no%10;
rev=rev*10+rem;
no=no/10;
}
printf("reverse of %ld is %ld",org,rev);
getch();
}
