#include<iostream>
using namespace std;
class student{
private:
	int roll;
	int marks;
public:
	string name;
	string branch;
student(int id,int mar,string nam,string br){
     roll=id;
	 marks=mar;
	 name=nam;
	 branch=br;	
}
void setmarks(int mark)
{
	marks=mark;
}
int getmarks()
{
	return marks;
}
int getroll(){
	return roll;
}
};

int main()
{
	student s1(35,100,"pooji","aiml");
//	s1.roll=35;
//	s1.setmarks(75);
//	s1.name="pooji";
//	s1.branch="aiml";
	cout<<s1.getroll()<<endl;
	cout<<s1.getmarks()<<endl;
	cout<<s1.name<<endl;
	cout<<s1.branch<<endl;
	return 0;
}
