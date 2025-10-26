#include <iostream>
#include <cmath>    //for sqrt() and pow() functions

using namespace std;

int main(){
	int opposite;
	int adjacent;
	
	cout<<"--------------------To find the hypotenuse of your right-angled triangle--------------------"<<"\n";
	cout<<"Enter length of opposite side:"<<"\n";
	cin>> opposite;
	
	cout<<"Enter length of adjacent side:"<<"\n";
	cin>> adjacent;
	
	int hypotenuse = sqrt(pow(opposite,2) + pow(adjacent,2));
	cout<<"Hypotenuse =="<<hypotenuse;

	


}