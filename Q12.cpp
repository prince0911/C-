#include<iostream>
#include<string.h>
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
char infix[100],prefix[100];
int i,j=0;
cout<<"\nEnter infix expression:";
cin>>infix;
strrev(infix);
for(i=0;infix[i]!='\0';i++)
{
switch(infix[i])
{
case ')':
push(infix[i]);
break;
case '^':case '+': case '-': case '*':case '/':
while(priority(s[top])>=priority(infix[i]))
prefix[j++]=pop();
push(infix[i]);
break;
case '(':
while(s[top]!=')')
prefix[j++]=pop();
pop();
break;
default:
prefix[j++]=infix[i];
break;
}
}
while(top>=0)
prefix[j++]=pop();
prefix[j]='\0';
strrev(prefix);
cout<<"\nThe prefix expression is : "<<prefix;

}