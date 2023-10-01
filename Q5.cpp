#include <iostream>
using namespace std;
class vehicle
{
protected:
int regis_no;
char fuelType[8];
public:
void getdata()
{
cout << "Enter registration number: ";
cin >> regis_no;
cout << "Enter fuel type: ";
cin >> fuelType;
}
void display()
{
cout << "Registration Number: " << regis_no << endl;
cout << "Fuel Type: " << fuelType << endl;
}
};
class twowheeler : public vehicle
{
private:
double distance;
double mileage;
public:
void getdata()
{
vehicle::getdata();
cout << "Enter distance (in km): ";
cin >> distance;
cout << "Enter mileage (in km/l): ";
cin >> mileage;
}
void display(){
vehicle :: display();
cout << "Distance: " << distance << " km" << endl;
cout << "Mileage: " << mileage << " km/l" << endl;
double fuelused = distance / mileage;
cout << "Fuel Used: " << fuelused << " liters" << endl;
}
};
int main()
{
twowheeler tw;
cout << "Enter Two-Wheeler Information:" << endl;
tw.getdata();
cout << "\nTwo-Wheeler Information:" << endl;
tw.display();
return 0;
}
