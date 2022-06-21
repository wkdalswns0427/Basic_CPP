#include <iostream>

using namespace std;

class addPersona
{
public:
	string myname;
	string secondname;
	addPersona(string name){
		cout<<"Your name is... "<<endl;
		myname = name;
	}
	void Hello(){
		cout<<"Hello I am "<<myname<<endl;	
	}
	void inputSecond(){
		cout<<"another name is ";
		cin>>secondname;
		cout<<endl;
	}
	void addup(){
		cout<<myname + secondname<<endl;
	}
};

int main(){
	addPersona *p1 = new addPersona("rockford");
	p1->Hello();
	cout<<"----------"<<endl;
	p1->inputSecond();
	p1->addup();
	
	return 0;
	
}
