#include <iostream>
#include <cmath>    //for sqrt() and pow() functions

using namespace std;

int main(){
	double  balance;
	double interest;
	
	cout<<"--------------------To find your balance after 1 year:--------------------"<<"\n";
	cout<<"Enter starting balance:"<<"\n";
	cin>> balance;
	
	cout<<"Enter annual interest rate:"<<"\n";
	cin>> interest;
	
	double balance_final = ((interest/100) * balance) + balance;
	cout<<"Your balance after 1 year =="<<balance_final<<"\n";
	
	cout<<"--------------------Your balance after 2 years:--------------------"<<"\n";
	double balance_final_final = ((interest/100) * balance_final) + balance_final;
	cout<<"Your balance after 2 years =="<<balance_final_final;
	

	


}