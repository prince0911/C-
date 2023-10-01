#include<iostream>
using namespace std;
class Shape
{
protected:
double length;
double width;
public:
void getdata()
{
cout << "Enter Length: ";
cin >> length;
cout << "Enter Width: ";
cin >> width;
}
virtual double calculate() = 0;
void display()
{
cout << "Area: " << calculate() << endl;
}
};
class Triangle : public Shape
{
public:
double calculate()
{
return 0.5 * length * width;
}
};
class Rectangle : public Shape
{
public:
double calculate()
{
return length * width;
}
};
int main()
{
Triangle t;
Rectangle r;
cout << "Enter Triangle Details:" << endl;
t.getdata();
cout << "Triangle ";
t.display();
cout << "\nEnter Rectangle Details:" << endl;
r.getdata();
cout << "Rectangle ";
r.display();
return 0;
}