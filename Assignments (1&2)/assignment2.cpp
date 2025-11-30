#include <iostream>
#include <string> //Always import string
#include <cstdlib>    // for rand() and srand()
#include <ctime>  // for time()
#include <iomanip> 
using namespace std;


double dailyLimit = 20000;
int user_pin = 4321;
int correctPin, new_pin, current_pin;
int i;
int choice;
double deposit, withdraw;
int currentPin;

bool verifyPin(){
    i=0;
    while (i<3){
    	cout<<"Enter your PIN: "<<endl;
        cin>>correctPin;
		if (correctPin==user_pin){
		    return true;
		}else{
			cout<<"Incorrect PIN, you have "<<3-i<<" attempt(s) left."<<endl;
		}
		i++;
		
	}
	cout<<"Account Locked. Please contact your bank."<<endl;
    return false;
    
	
}  

void displayMenu(){
    cout<<"===================================ATM MENU=========================="<<endl;
	cout<<"\t1.View Balance \n\t2. Deposit Cash \n\t3. Withdraw Cash \n\t4. Reset PIN \n\t5. Exit"<<endl;
	cout<<"Enter your choice:"<<endl;
}
double balance = 50000;

double viewBalance(double balance_1){
	cout<<"Your current balance:"<<balance<<endl;
	return balance;
}

double depositMoney(double balance_1){
	cout<<"Enter a deposit amount:"<<endl;
	cin>>deposit;
	balance = deposit+balance;
	return balance;	  
}


double withdrawMoney(double balance_1, double dailyLimit){
	cout<<"Enter a withdrawal amount:"<<endl;
	cin>>withdraw;
	if (withdraw<balance && withdraw<dailyLimit){
		balance = balance-withdraw;
		
		
	}else{
		cout<<"Invalid amount"<<endl;
	}
	
	return balance;
	
}
	


int resetPin(int currentPin){
	cout<<"Enter your current PIN:"<<endl;
	cin>>current_pin;
	if (current_pin==user_pin){
		cout<<"Enter your new PIN:"<<endl;
	    cin>>new_pin;
	}
	user_pin=new_pin;

	return user_pin;
	
}
	  

    
    

int main(){
    bool pin_verification = verifyPin();
    do{
    	displayMenu();
    	cin>>choice;
    	
    	switch(choice){
    		case 1:{
	    		double account_balance = viewBalance(balance);
	    		break;}
	    		
	    	case 2:{
	    		double deposit_amount = depositMoney(balance);
	    		break;}
	    		
	    	case 3:{
	    		double withdrawal_amount = withdrawMoney(balance, dailyLimit);
				break;
			}
			
			case 4:{
				int pin_reset = resetPin(currentPin);
				break;
			}
    		 case 5:{
    		 	cout<<"Thank you for using our ATM."<<endl;
				break;
			}
		}
    	
	}while(choice!=5);
    
	
    
    
     
     
   
		
}
	

	