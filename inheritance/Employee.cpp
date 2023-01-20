#include<iostream>
using namespace std;
class member{
public:
	string name;
	int age;
	int phone_no;
	char adress;
	member(string n, int ag, int pn, char add){
name=n;
age=ag;
phone_no=pn;
adress=add;		
}

void set_data(){
	
	cout<<"Name:";
	cin>>name;
	cout<<"Age: ";
	cin>>age;
	cout<<"Phone no: ";
	cin>>phone_no;
	cout<<"city";
	cin>>adress;
	cout<<"country";
	cin>>adress;
}


};
class employee:public member{

public:
	
	string specialization;
	string department;
	employee(string speci){
		specialization=speci;
		
	};
void data(){
	cout<<"Enter your specialization";
	cin>>specialization;
	
}




};
class manager:public member{
	public:
	string specialization;
	string department;
	manager(string depart){
		department =depart;
	}
	void dep(){
		cout<<"Enter the department : ";
		cin>>department;
	}

};
int  main (){
	
member m;
	manager man;
	employee ee;
	m.set_data();
	ee.set_data();
	man.set_data();
}
