//1. Declaring Objects
//Problem: Create a class Student with roll number and name. Declare two objects and display their values using a member function
//#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int roll_no;
		string name;
		student(int roll_no, string name){
			this->roll_no=roll_no;
			this->name=name;	
		}
	void display(){
	cout<<"roll number : "<<roll_no<<endl;
	cout<<"name : "<<name;
    } 
};
int main(){
    student s1(44,"kalyani");
//	student s2;
//    s1.roll_no=44;
//    s1.name ="kalyani";
//    
//    s2.roll_no=54;
//    s2.name ="hasini";
     
     cout<<"student 1 details"<<endl;
     s1.display();
//     cout<<"student 2 details"<<endl;
//     s2.display();
     return 0;
}

