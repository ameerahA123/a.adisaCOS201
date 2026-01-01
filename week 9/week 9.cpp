//file handling in c++
#include <fstream> //file manipulation
#include <iostream> //input and output
#include <string>//to handle string

#include <string> //Always import string
using namespace std;


int main(){
	//ofstream ===> write to a file (output)
	//ifstream ===> read from a a file (input)
	//fstream ===> read and write
	
	//outfile is a variable name
	ofstream outfile("data.txt"); //the file will be found in the same location as the source code
	if (!outfile){
		cout<<"Error opening this file";
		return 0;
	}
	outfile << "Welcome to C++ class\n";
	outfile << "This is file handling class\n";
	outfile.close();
	
	
	
	
	
	
	ifstream infile("data.txt");
	if (!infile){
		cout<<"Cannot open file";
		return 0;
	}
	string line;
	int count=0;
	while(getline(infile, line)){  //*
		cout<<line<<endl;
		count++;
		
	}
	cout<<"The number of lines are "<<count<<endl;
	infile.close();
	cout<<"DONE";
	
	
	
	
	fstream file("data.txt", ios::out | ios::app);   //reading from the file and appending to the file 
//	ios::out ==> write mode
//	ios::app ==> append mode
//	ios::trunc ==> erase file before writing
//	ios::Init ==> read mode

    file<<"Please, add this new line\n";
    file.close();
    cout<<"DONE.\n";
    
    
    
    
    
    
    //reading integers file
    ifstream insidefile("data.txt");
    if (!insidefile){
    	cout<<"cannot open file";
    	return 0;
	}
    
    int number;
    while(infile >> number){
    	cout<<number;
	}
	infile.close();



	
	
	
	
	
	
	return 0;
}