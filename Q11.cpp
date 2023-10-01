#include<iostream>
using namespace std;
const int n=100;
int top=-1;
char s[n];
void push(char data)
{
top++;
s[top]=data;
}
char pop()
{
char data;
data=s[top];
top--;
return data;
}
int priority(char op)
{
int c=0;
switch(op)
{
case '^':
c=3;
break;
case '*':case '/':
c=2;
break;
case '+':case '-':
c=1;
break;
}
return c;
}
int main()
{
char infix[100],postfix[100];
int i,j=0;
cout<<"\nEnter infix expression:";
cin>>infix;
for(i=0;infix[i]!='\0';i++)
{
switch(infix[i])
{
case '(':
push(infix[i]);
break;
case '^':case '+': case '-': case '*':case '/':
while(priority(s[top])>=priority(infix[i]))
postfix[j++]=pop();
push(infix[i]);
break;
case ')':
while(s[top]!='(')
postfix[j++]=pop();
pop();
break;
default:
postfix[j++]=infix[i];
break;
}
}
while(top>=0)
postfix[j++]=pop();
postfix[j]='\0';
cout<<"\nThe postfix expression s : "<<postfix;
}
