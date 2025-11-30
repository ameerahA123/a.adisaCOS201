#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
	string name;
	cout<<"Fullname:"<<endl;
    getline(cin,name);
    
    bool student;
    cout<<"Are you a PAU student? (Enter 1 if yes, enter 0 if no)"<<endl;
    cin>>student; 
    
    
    string pau = "";
    if (student==1){
    	pau += "Yes";
    	
	}else{
		pau += "No";
	}
    
    
    int course;
    cout<<"Course (Enter between 1-5):"<<endl;
    cin>>course; 
    
    int location;
    cout<<"Location (Enter between 1-5):"<<endl;
    cin>>location; 
    
    
    
    
    
    //OUTPUT
    cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"PAU Student:"<<pau<<endl;


    
    int days=0;
    int regFee = 0;
    int regDiscount =0;
    
    
    
	if (course==1){	
	    string subject = "Photography";
        cout<<"Course:"<<subject<<endl;

	    days += 3;
	    regFee += 10000;
		cout<<"Days:"<<days<<endl;
	}else if(course==2){
	    string subject = "Painting";
        cout<<"Course:"<<subject<<endl;

		days += 5;
	    regFee += 8000;
		cout<<"Days:"<<days<<endl;
	}else if(course==3){
	    string subject = "Fish Farming";
        cout<<"Course:"<<subject<<endl;

		days += 7;
	    regFee += 15000;
		cout<<"Days:"<<days<<endl;
	}else if(course==4){
	    string subject = "Baking";
        cout<<"Course:"<<subject<<endl;

		days += 5;
	    regFee += 13000;
		cout<<"Days:"<<days<<endl;
	}else if(course==5){
	    string subject = "Public Speaking";
        cout<<"Course:"<<subject<<endl;

		days += 2;
	    regFee += 5000;
		cout<<"Days:"<<days<<endl;
	}
	
	if ((days > 5) || (regFee > 12000)){
		regDiscount = regFee * 0.03 ;
		cout<<"Registration = N"<<regFee<<"(reg. discount:N"<< regDiscount <<")"<<endl;

	}else{
		regDiscount = 0;
		cout<<"Registration = N"<<regFee<<"(reg. discount:N"<< regDiscount <<")"<<endl;

	}
	
	
	int lodgingCost =0;
	int total =0;
	int lodgingPerDay=0;
	int lodgingDiscount=0;
	
	
	
	
	if (location==1){
		lodgingPerDay += 10000;
		lodgingCost = lodgingPerDay * days;
		total = regFee + lodgingCost;
		
		//cout<<"Lodging per day = N"<<lodgingPerDay<<endl;
		//cout<<"Total = N"<<total<<endl;

	}else if(location==2){
		lodgingPerDay += 2500;
		lodgingCost = lodgingPerDay * days;
		total = regFee + lodgingCost;

		//cout<<"Lodging per day = N"<<lodgingPerDay<<endl;
		//cout<<"Lodging Cost = N"<<lodgingCost<<endl;
		
	}else if(location==3){
		lodgingPerDay += 5000;
		lodgingCost = lodgingPerDay * days;
		total = regFee + lodgingCost;
		
		//cout<<"Lodging per day = N"<<lodgingPerDay<<endl;
		//cout<<"Lodging Cost = N"<<lodgingCost<<endl;
		
	}else if(location==4){
		lodgingPerDay += 13000;
		lodgingCost = lodgingPerDay * days;
		total = regFee + lodgingCost;
		
		//cout<<"Lodging per day = N"<<lodgingPerDay<<endl;
		//cout<<"Lodging Cost = N"<<lodgingCost<<endl;

		
	}else if(location==5){
		lodgingPerDay += 5000;
		lodgingCost = lodgingPerDay * days;
		total = regFee + lodgingCost;
		
		//cout<<"Lodging per day = N"<<lodgingPerDay<<endl;
		//cout<<"Lodging Cost = N"<<lodgingCost<<endl;
	
	}
	
	if (student && (location==2 || location==3)){
		lodgingDiscount = lodgingCost * 0.05 ;
		cout<<"Lodging:"<<lodgingPerDay<<"x"<<days<<"="<<lodgingCost<<"(lodging discount:N"<< lodgingDiscount <<")"<<endl;
	}else{
		lodgingDiscount = 0;
		cout<<"Lodging:"<<lodgingPerDay<<"x"<<days<<"="<<lodgingCost<<"(lodging discount:N"<< lodgingDiscount <<")"<<endl;

	
		
	}
	


	
	srand(time(0));
	int random = rand()%101;
	cout<<"Random Draw:"<<random<<endl;
	
	if (random == 7 || random == 77){
		cout<<"Promo applied: N500"<<total<<endl;
	
		total = (regFee-regDiscount) + (lodgingCost-lodgingDiscount) - 500;
		cout<<"TOTAL: N"<<total<<endl;

	}else{
		cout<<"Promo applied: None"<<endl;
		total = (regFee-regDiscount) + (lodgingCost-lodgingDiscount);
		cout<<"TOTAL: N"<<total<<endl;



		
		
	}
	

	
	
}