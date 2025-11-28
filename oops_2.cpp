//2. Access Specifiers and Their Scope
//Problem: Create a class Account with private balance, protected accountNumber, and public holderName. Show how to access each correctly
#include<bits/stdc++.h>
using namespace std;
class account{
	public:
		string name;
	private:
		double balance1;
	protected:
		int acc_num;
	public: 
	void setacc_num(int acc_num){
		this->acc_num=acc_num;
	}
	public: void getacc_num(){
		cout<<"account number "<<acc_num<<endl;
	}
	public: void setbalance( double balance1){
		this->balance1=balance1;
	}
	public: void getbalance(){
		cout<<"bank balance "<<balance1<<endl;
	}
	void display(){
		cout<<"Holder Name "<< name<<endl;
	}
};
int main(){
	account a1;
	a1.name="kalyani";
    a1.setbalance(100.789);
    a1.getbalance();
    a1.setacc_num(12334);
    a1.getacc_num();
	a1.display();
	return 0;
}
