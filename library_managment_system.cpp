#include<bits/stdc++.h>
using namespace std;

class book{
	public:
		int id:
		string title;
		string author;
		int avaliablecopies;
		book(int id,string title,string author,int avaliablecopies){
			this->id=id;
			this->title=title;
			this->author=author;
			this->avaliablecopies=avaliablecopies;
		}
		void displaybook(){
			cout<<id<<"id"<<endl;
			cout<<title<<"title"<<endl;
			cout<<author<<"author"<<endl;
		}
};
class member{
	public:
		int id;
		string name;
		int phonenumber;
		vector<book>infobook;
		member(int id,string name,int phonenumber){
			this->id=id;
			this->name=name;
			this->phonenumber=phonenumber;
		}
		void borrowbook(int bookid){
			infobook.pushback(bookid);
		}
		void returnbook(int bookid){
			auto id=find(infobook.begin(),infobook.end(),bookid);
			infobook.erase(it);
		}
};
class library{
	public:
		vector<book>books;
		vector<member>members;
		void addbook(book b){
			books.push_back(b);
		}
		void addmember(member m){
			members.push_back(m);
		}
		void borrowbook(int memberid,int bookid){
			for(auto &b : books){
				if(b.id==bookid && b.avaliablecopies>0){
					for(auto &m : members){
						if(m.id == memberid){
							m.borrowbook(bookid)
							b.avaliablecopies--;
							cout<<m.name<<"borrowed"<<b.title<<endl;
							f=1;
						}
					}
				}
			}
			if(f==0 )cout<<"book is not avaliable\n";
		}
		void returnbook(int memberid,int bookid){
			for(auto &b : books){
				id(b.id == bookid){
					for(auto &m : members){
						if(m.id == memberid){
							m.returnbook(bookid);
							b.avaliablecopies++;
							cout<<m.name<<"returned"<<b.title<<endl;
							return;
						}
					}
				}
			}
			cout<<"invalid return id"<<endl;
		}
};
int main(){
	library lib;
	book b1(1,"c++","ashok",3);
	lib.addbook(b1);
	member m1(2,"ram",9654128525);
	
}

