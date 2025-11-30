#include <iostream>
#include <string> //Always import string
using namespace std;

string fullname;
string name;

string full_name(string fullname){
	cout<<"Full name:"<<endl;
	getline(cin, fullname);
	return fullname;
}

int main(){
	name = full_name(fullname);
	cout<<name;
	
	return 0;
}