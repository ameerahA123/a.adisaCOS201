#include <iostream>

using namespace std;

int main(){
	//POSTINCREMENT
	int i = 1;
	int j = i++;
	
	cout<<j;
	cout<<i;
	
	//PREINCREMENT
	int a = 1;
	int b = ++a;
	cout<<b;
	cout<<a;

}