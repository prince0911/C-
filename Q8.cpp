#include<iostream>
#include<string.h>
using namespace std;
class tel_dir
{
private:
char name[20];
char number[15]; // Adjusted for longer phone numbers
public:
void add()
{
cout << "\nEnter Name: ";
cin.getline(name, sizeof(name));
cout << "Enter Number: ";
cin.getline(number, sizeof(number));
}
void show()
{
cout << "\nName: " << name << "\nNumber: " << number << endl;
}
int search(char nm[20])
{
if (strcmp(nm, name) == 0)
return 1;
else
return 0;
}
};
int main()
{
int i;
char nm[20];

tel_dir entry[3];
for (i = 0; i < 3; i++)
{
cout << "\nEnter details for entries "<<i+1;
entry[i].add();
}
cout<<"\nOUTPUT";
for (i = 0; i < 3; i++)
{
entry[i].show();
}
cout << "\nEnter name to search: ";
cin.getline(nm, sizeof(nm));
int found = 0;
for (i = 0; i < 3; i++)
{
if (entry[i].search(nm))
{
entry[i].show();
found = 1;
}
}
if (!found)
{
cout << "\nEntry not found!" << endl;
}
return 0;
}
