#include <iostream>
using namespace std;
class person
{
protected:
char name[10];
int i, age;
public:
person()
{
for (i = 0; i < sizeof(name); ++i)
{
name[i] = '\0';
}
age = 0;
}
void readData()
{
cout << "Enter Name: ";
cin >> name;
cout << "Enter Age: ";
cin >> age;
}
void displayData()
{
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
}
};
class student : public person
{
private:
float percentage;
public:
student()
{
percentage = 0.0;
}
void readstudentData()
{
cout << "Enter Percentage: ";
cin >> percentage;
}
void displaystudentData()
{
displayData();
cout << "Percentage: " << percentage << "%" << endl;
}
};
class teacher : public person
{
private:
double salary;
public:
teacher()
{
salary = 0.0;
}
void readteacherData()
{
cout << "Enter Salary: ";
cin >> salary;
}
void displayteacherData()
{
displayData();
cout << "Salary: " << salary << endl;
}
};
int main()
{
student s;
teacher t;
cout << "Enter student Details:" << endl;
s.readData();
s.readstudentData();
cout << "\nEnter teacher Details:" << endl;
t.readData();
t.readteacherData();
cout << "\nstudent Information:" << endl;
s.displaystudentData();
cout << "\nteacher Information:" << endl;
t.displayteacherData();
return 0;
}
