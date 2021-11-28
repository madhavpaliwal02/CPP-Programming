#include<iostream.h>
#include<cstring.h>
#include<fstream.h>
#include<stdlib.h>
#include<time.h>


static const char pool[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789";
int poolsize=sizeof(pool)-1;
char getRandomChar()
{
return pool[rand()% poolsize];
}
int main(){
int a;
string login;
string  username;
cout<<"press 1 for admin"<<endl;
cout<<"press 2 for check attendance"<<endl;
cin>>a;
cin.ignore();
if(a==1)
{
cout<<endl;
cout<<"enter your username"<<endl;
getline(cin,username);
cout<<endl;
cout<<"enter your login password"<<endl;
getline(cin,login);
cout<<endl;
if(username=="manas_patidar"&&login==manas@12)
{
int i, passlength=4;
string num;
srand(time(0));
for(i=0; i<passlength; i++)
{
num+=getRandomChar();
}
cout<<num<<endl
cout<<"this is your password"<<endl<<endl<<endl;
string password;
string roll;
cout<<"Attendance"<<endl<<endl;
char **titlr;
title=new char*[80];
for(i=0; i<51; i++)
{
title[i]=new char[80];
}
title[0]="khushi";
title[1]="madhav";
title[2]="manas";
title[3]="manasi";
title[4]="mahak";
title[5]="mehak";
cout<<"enter your password"<<endl;
getline(cin,password);
if(password==num)
{
ofstream outf;
outf.open(num.c_str());
for(i=0; i<=4; i++)
{
int s;
cout<<endl;
cout<<"enter your roll no"<<endl;
cin>>s;
outf<<"student_name:"<<titl[s]<<"!present"<<endl;
}
outf.close();
}
else
{
cout<<endl;
cout<<"this enrollment or password maybe incorrect"<<endl;
}
}
else
{
cout<<endl;
cout<<"this username or login password maybe incorrect"<<endl;
}
}
elseif(a==2)
{
string getnum, mytext;
cout<<endl;
cout<<"enter date"<<endl;
getline(cin,getnum);
ifstream inf;
inf.open(getnum.c_str());
inf>>mytext;
while(!inf.eof())
{
cout<<endl;
cout<<mytext<<endl;
inf>>mytext;
}
inf.close();
}
else
{
cout<<"please choose a correct option"<<endl;
}
return 0;
}