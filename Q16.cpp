#include<iostream>
#include<stdio.h>
using namespace std;
const int n=5;
int q[5];
int f=-1;
int r=-1;
class deqq{
    public:
void insert_r(int data)
{
if(r==n-1)
{
cout<<"\nQ Overflow from right side";
return;
}
r++;
q[r]=data;
if(f==-1)
f=0;
}
int del_l()
{
int data;
if(f==-1)
{
cout<<"\nQ underflow";
return 0;
}
data=q[f];
q[f]=0;
if(f==r)
f=r=-1;
else
f++;
return data;
}
void insert_l(int data)
{
if(f==0)
{
cout<<"\nQ overflow from left side";
return;
}
if(f==-1)
f=r=n-1;
else
f--;
q[f]=data;
}
int del_r()
{
int data;
if(r==-1)
{
cout<<"\nQ underflow";
return 0;
}
data=q[r];
q[r]=0;
if(f==r)
f=r=-1;
else
r--;
return data;
}
void disp()
{
int i;
if(f==-1)
cout<<"\nQ s empty";
else
{
for(i=0;i<=n-1;i++)
cout<<"\t"<<q[i];
}
}
};
int main()
{
    deqq d;
int ch,e,p;
char side,rside;
cout<<"\n\tEnter restricted side(l/r) : ";
fcloseall();
cin>>rside;
do
{
cout<<"\n1)Insert";
cout<<"\n2)Delete";
cout<<"\n3)Display";
cout<<"\n4)Exit";
cout<<"\n\nEnter choice:";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter no:";
cin>>e;
cout<<"Enter side(Left/Right) : ";
fcloseall();
cin>>side;
if(side=='r' || side=='R')
d.insert_r(e);
else if(side=='l' || side=='L')
d.insert_l(e);
break;
case 2:
if(rside=='l' || rside=='L')
e=d.del_r();
else
e=d.del_l();
break;
case 3:
d.disp();
break;
case 4:
cout<<"\nExit...";
break;
default:
cout<<"\ninvalid Choice";
break;
}
}while(ch!=4);
return 0;
}
