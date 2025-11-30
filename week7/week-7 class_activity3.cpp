#include <iostream>
using namespace std;

int b;
void nprint(string line, int i =5){
	for (b=1; b<=i; b++){
		cout<<line<<endl;
			
		
	}
} 


int add(int a, int b){
	int sum = a + b;
	return sum;
}
int main(){
	//nprint("Ibidapo");
	nprint("Welcome to C++ Class");

    int result = add(12,18);	
}