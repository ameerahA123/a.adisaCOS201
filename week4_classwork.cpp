#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int number;
	cout<<"Enter a number:"<<endl;
    cin>>number;
	   
	if (number%5==0){
		cout<<"HiFive"<<endl;
		
	}
	
	if (number%2==0){
		cout<<"HiEven"<<endl;
	}
	
	
	
	int age;
	cout<<"Enter your age:"<<endl;
    cin>>age;
	   
	if (age>=18){
		cout<<"You are an adult.";
		
	}else{
	    cout<<"You are NOT an adult."																							<<endl;

		
	}
	
	//Xn+1 = aXn(seed) + C
	
	//srand(40);
	//this generates random value for seed:
	srand(time(0));
	cout<<rand()%10;
	//to control range i.e 0-9
	
	int a;
	int subtract;
	int number1;
	number1 = rand()%10;
	
	int number2;
	number2 = rand()%10;
	
	if (number1 << number2){
		a = number1;
		number2 = a;
		a=number2;
		
		cout<<"What is number1-number2?"<<endl;
		cin>>subtract;
	}
    
    if (subtract == (number1-number2)){
    	cout<<"You are correct.";
	}else{
		cout<<"You are wrong.";
	}
	
	
	

	
	
	

	
	
	
	
}