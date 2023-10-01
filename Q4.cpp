#include <iostream>
using namespace std;
class student
{
protected:
int id, m1, m2, m3, total;
float per;
char nm[20];
public:
void getdata()
{
cout << "Enter student ID: ";
cin >> id;
cout << "Enter student name: ";
cin >> nm;
}
void getmarks()
{
cout << "Enter Marks 1: ";
cin >> m1;
cout << "Enter Marks 2: ";
cin >> m2;
cout << "Enter Marks 3: ";
cin >> m3;
}
void display()
{
cout << "ID: " << id << endl;
cout << "Name: " << nm << endl;
cout << "Marks 1: " << m1 << endl;
cout << "Marks 2: " << m2 << endl;
cout << "Marks 3: " << m3 << endl;
total = m1 + m2 + m3;
cout << "Total Marks: " << total << endl;
per = total / 300.0 * 100.0;
cout << "Percentage : " << per << endl;
}
};
int main()
{
int i, n;
student s[100];
cout << "Enter no. of students : ";
cin >> n;
for (i = 1; i <= n; i++)
{
cout << "Enter details of student " << i << endl;
s[i].getdata();
s[i].getmarks();
}
for (i = 1; i <= n; i++)
{
cout << "Details of student : " << i << endl;
s[i].display();
}
return 0;
}