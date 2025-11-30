#include <iostream>
 
using namespace std;

int max(int num1, int num2){
	int max_numb;
	if(num1>num2){
		max_numb = num1;
	}
	else{
		max_numb = num2;
	}
	return max_numb;	
}

int main(){
	int result;
	
	result = max(120,160); //max takes in 2 parameters in the function above hence num1 = 120 and num2 = 160
	cout<<"The max value is "<<result<<endl;
	int result1 = max(1201,1160);
    cout<<"The max value is "<<result1<<endl;
}