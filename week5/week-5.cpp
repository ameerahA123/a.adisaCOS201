#include <iostream>
#include <string>
#include <iomanip> //setw()
using namespace std;

int main(){

    int year ;
    int chinese_year;
    cout << "Enter the year you were born"<<endl;
    cin>>year;
    
    chinese_year = year%12;
    
    switch(chinese_year){
    	case 0:
    		cout<<"You were born in the monkey year"<<endl;
    		break;
		case 1:
    		cout<<"You were born in the rooster year"<<endl;
    		break;
		case 2:
    		cout<<"You were born in the dog year"<<endl;
    		break;
		case 3:
    		cout<<"You were born in the pig year"<<endl;
    		break;
		case 4:
    		cout<<"You were born in the rat year"<<endl;
    		break;
		case 5:
    		cout<<"You were born in the ox year"<<endl;
    		break;
		case 6:
    		cout<<"You were born in the tiger year"<<endl;
    		break;
		case 7:
    		cout<<"You were born in the rabbit year"<<endl;
    		break;
		case 8:
    		cout<<"You were born in the dragon  year"<<endl;
    		break;
		case 9:
    		cout<<"You were born in the snake year"<<endl;
    		break;
		case 10:
    		cout<<"You were born in the horse year"<<endl;
    		break;
		case 11:
    		cout<<"You were born in the sheep year"<<endl;
    		break;

	}
	int i;
	int j;
	int k;
	int product=1;
	int sum=0;
	for (i=1;i<6;i++){
		for (j=2;j<4;j++){
		     sum = sum + i + j;
			 cout<<sum;	
		}
	}
	
	for (i=1;i<6;i++){
		for (k=2;k<5;k++){
		    product = product * i * k;

			 
		}
	}
 	//cout<<product;
	 
	 cout<<"Multiplication Table\n";
	 cout<<"===================================================================================="<<endl;
	 
	cout<<"    |";
	for (int i=1; i<13; i++){
	 	cout<<setw(4)<<i;
	}
	cout<<"\n";
	for (int j=1; j<13; j++){
	 	cout<<j<<"  |";
	 	for (int k=1; k<13; k++){
	 		cout<<setw(4)<<j*k;
		 }
		 cout<<"\n";
	}
		
	 

}
    
     
	 
	 