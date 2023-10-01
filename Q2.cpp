#include <iostream>
#include <string.h>
using namespace std;
class bank
{
private:
char name[50];
char acc_no[15];
char acc_type[20];
double balance;
public:
bank(const char* acc_name, const char* accNum, const char* type, 
double bal)
{
strcpy(name , acc_name);
strcpy(acc_no , accNum);
strcpy(acc_type , type);
balance = bal;
}
void deposit(double amount)
{
if (amount > 0)
{
balance += amount;
cout << "Deposited :" << amount << endl;
}
else
{
cout << "Invalid deposit amount." << endl;
}
}
void withdraw(double amount) 
{
if (amount > 0 && amount <= balance)
{
balance -= amount;
cout << "Withdrawn :" << amount << endl;
}
else
{
cout << "Insufficient funds or invalid withdrawal amount." <<
endl;
}
}
void display()
{
cout << "Account Holder: " << name << endl;
cout << "Account Number: " << acc_no << endl;
cout << "Account Type: " << acc_type << endl;
cout << "Account Balance: " << balance << endl;
}
};
int main()
{
bank accounts[5] =
{
bank("Prince Bhutwala", "856487", "Savings", 30000.0),
bank("Nayan Patel", "678789", "Current", 25000.0),
bank("Sujal Gariwla","54421", "Savings", 35000.0),
bank("Mann Desai", "98765", "Current", 20000.0),
bank("Salman Parekh", "13179", "Savings", 35000.0)
};
accounts[0].deposit(5000.0);
accounts[1].withdraw(2500.0);
accounts[2].deposit(10000.0);
accounts[3].withdraw(3000.0);
accounts[4].withdraw(5600.0);
for (int i = 0; i < 5; i++) 
{
cout << "\nAccount " << i + 1 << " Information:" << endl;
accounts[i].display();
cout << endl;
}
return 0;
}
