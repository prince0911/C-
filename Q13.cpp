#include<iostream>
using namespace std;
int n=5;
int q[5];
int f=-1,r=-1;
class que{
    public:
void insert(int data)
{
if(r==n-1)
{
cout<<"\nQ overflow";
return;
}
r++;
q[r]=data;
if(f==-1)
f=0;
}
int del()
{
int data;
data=q[f];
if(f==r)
f=r=-1;
else
f++;
return data;
}
void disp()
{
int i;
if(f==-1)
cout<<"\nQ is empty";
else
{
for(i=f;i<=r;i++)
{
cout<<"\t"<<q[i];
}
}
}
};
int main()
{
    que q;
int ch,e,p;
 cout<<"\n1)Insert";
cout<<"\n2)Delete";
cout<<"\n3)Display";
cout<<"\n4)Exit";
do
{
cout<<"\n\nEnter your choice : ";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter element : ";
cin>>e;
q.insert(e);
q.disp();
break;
case 2:
e=q.del();
cout<<"\nThe deleted element is : "<<e<<endl;
q.disp();
break;
case 3:
q.disp();
break;
}
}while(ch!=4);
}
