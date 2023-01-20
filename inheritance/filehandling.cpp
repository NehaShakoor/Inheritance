#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fio;
	string line;
	fio.open("sample.txt",ios::trunc | ios::out | ios::in);
	while(fio){
		getline(cin, line);
		
		if(line=="-1")
		break;
		fio<<line<<endl;
	}
	fio.seekg(0, ios::beg);
	getline(fio, line);
	fio<<line<<endl;
	
	fio.close();
	
}
