#include<iostream>
using namespace std;
class bank{
	double balance;
	public:
		bank(double bal)
		{
			balance = bal;
		}
		void withdraw(double money)
		{
			try{
				if(money > balance)
				{
					throw "You dont have sufficent balance to withdraw !";
				}
				balance -= money;
				cout << "Now u have " << balance << endl;
			}
			catch(const char *A)
			{
				cout << "Error ! " << A << endl;
			}
		}
		void credit(double money)
		{
			balance += money;
			cout << "Now u have " << balance << " In ur acc" << endl;
		}
};
int main()
{
	bank b1(100500);
	b1.withdraw(50000);
	b1.credit(200);
	b1.withdraw(1);
}
