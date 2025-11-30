#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	
	cout<<"Enter x = \n";
    cin>>x;
    
    cout<<"Enter y = \n";
    cin>>y;
    
    int sum = x + y;
    int minus = x-y;
    
    
    cout<<"The sum: \n";
    cout<< sum << "\n";

    cout<<"\nThe minus: \n";
	cout<< minus;
    

    
    int a;
    int b;
    cout << "\nEnter the first number (a): \n";
    cin >> a;
    
    cout << "Enter the second number (b): \n";
    cin >> b;
    
    cout << "Before swapping: a = " << a << ", b = " << b << "\n";
    
    
    int temp;
    temp = a;  
    a = b;     
    b = temp;  
    
    cout << "After swapping: a = " << a << ", b = " << b;
    
    return 0;
    
}

