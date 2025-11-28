#include<iostream>
using namespace std;
class product{
private:
	double price;
	int stock;
public:
	string proname;
	string category; 
product(double pri,int sto,string name,string cat)
{
	price=pri;
	stock=sto;
	proname=name;
	category=cat;
}
void setprice(double pr)
{
	price=pr;
}
void setstock(int st)
{
	stock=st;
}
double getprice()
{
	return price;
}
int getstock()
{
	return stock;
}
};
int main()
{
	product p1(2000,20,"table","wood");
	cout<<"price:"<<p1.getprice()<<endl;
	cout<<"stock:"<<p1.getstock()<<endl;
	cout<<"product name:"<<p1.proname<<endl;
	cout<<"category:"<<p1.category<<endl;
	return 0;
}
