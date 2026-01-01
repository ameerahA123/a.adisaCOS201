#include <iostream>
#include <string> //Always import string
#include <cstdlib>    // for rand() and srand()
#include <ctime>  // for time()
#include <iomanip> 
using namespace std;

string fullname, admission;
string name;
int jamb;
int jambscore, hostel_preference, hostel_pref;
double waecAverage;
double waec;
int age_1,age;
bool disciplinary_record,choice, first_choice, disciplinary_rec;
int baseTuition = 1500000;
float scholarship, tuitionAfterScholarship;
float meritGrant;
string hostel_name;
int hostel_price;

string full_name(string fullname){ //Always declare your parameters in the bracket.
	cout<<"Full name:"<<endl;
	getline(cin, fullname);
	return fullname;
}

int jamb_score(int jambscore){ //Always declare your parameters in the bracket.
    cout<<"JAMB Score (0-400):"<<endl;
	cin>>jambscore;
	return jambscore;
}

double waec_average(double waecAverage){ //Always declare your parameters in the bracket.
    cout<<"WAEC Average (0-100):"<<endl;
	cin>>waecAverage;
	return waecAverage;
  
}

int age_01(int age_1){ //Always declare your parameters in the bracket.
    cout<<"Age (in years):"<<endl;
	cin>>age_1;
	return age_1;
  
}

bool firstChoice(bool first_choice){ //Always declare your parameters in the bracket.
    cout<<"First-Choice PAU? (1/0):"<<endl;
	cin>>first_choice;
	return first_choice;
  
}

bool discipline(bool disciplinary_rec){ //Always declare your parameters in the bracket.
    cout<<"Any disciplinary record? (1/0):"<<endl;
	cin>>disciplinary_rec;
	return disciplinary_rec;
  
}

int hostel(int hostel_pref){ //Always declare your parameters in the bracket.
    cout<<"Hostel Preference (1-3)"<<endl;
    cout<<"\t 1 = Main Hostel (180,000) \n\t 2 = Annex Hostel (120,000) \n\t 3 = Day Student (0)"<<endl;
    cout<<"Enter here:"<<endl;
	cin>>hostel_pref;
	return hostel_pref;
  
}
int main(){
	name = full_name(fullname);
	jamb=jamb_score(jambscore);
	waec=waec_average(waecAverage);
	age = age_01(age_1);
	choice = firstChoice(first_choice);
	disciplinary_record = discipline(disciplinary_rec);
	
	hostel_preference = hostel(hostel_pref);
	
	string hostel;
	int hostel_price; //declare variables before a switch
	

	
	if ( ((jamb >= 220 && waec >= 60)&&choice==true) || (jamb >= 200 && waec >= 70)){
		admission = "Admitted";
	}
	else if((disciplinary_record==true)||age<15){
		admission = "Rejected";
	}else{
		admission="Pending";
	}
	
	if (admission=="Admitted"){
		if (jamb>= 320){
			scholarship = 0.3;			
		}else if (jamb>= 280){
			scholarship = 0.2;
		}else if (jamb>= 240){
			scholarship = 0.1;
    	}else{
		
			scholarship = 0.0;}
			
		if(waec >= 80 && choice == true){
			scholarship+=0.05;
		}
		if (scholarship > 0.35){
			scholarship = 0.35;
		}
		tuitionAfterScholarship = baseTuition - (baseTuition * scholarship);

	}
	
	if (admission=="Admitted"&&disciplinary_record==false){
		switch(hostel_preference){
			case 1:
				hostel_name= "Main Hostel";
				hostel_price = 180000;
				break;
				
	        case 2:
				hostel_name = "Annex Hostel";
				hostel_price = 120000;
				break;
				
			case 3:
				hostel_name = "Day Student";
				hostel_price = 0;
				break;
		}	
	}else if (admission=="Pending"){
		hostel_name = "On Hold (0)";
		hostel_price = 0;
		
	}else if (admission=="Rejected"){
		hostel_name = "Not Applicable (0)";
		hostel_price = 0;
		
	}
	
	srand(time(0)); //Always write this first to generate random seed
	int r = (rand()%100)+1;
	
	bool isPrime = (r==2 || r==3 || r==5 || r==7 || r==11 || r==13 || r==17 ||
                r==19 || r==23 || r==29 || r==31 || r==37 || r==41 || r==43 ||
                r==47 || r==53 || r==59 || r==61 || r==67 || r==71 || r==73 ||
                r==79 || r==83 || r==89 || r==97);

	
	if (isPrime && admission=="Admitted"){
		meritGrant= 50000.00;
		//cout << "Grant applied! 50,000 discount"<<endl;
	}else{
		//cout<<"No grant applied"<<endl;
	}
	
	float totalPayable = tuitionAfterScholarship + hostel_price - meritGrant;
	
	if (totalPayable < 0){
		totalPayable = 0;
		
	} 

	
	cout<<"--------------------------OUTPUT--------------------------------"<<endl;
	cout << fixed << setprecision(2); 
	cout<<"Name:"<<name<<endl;
	cout<<"Admission Status:"<<admission<<endl;
	cout<<"Scholarship: N"<<scholarship*100<<"%"<<"    "<<"Tuition After Scholarship: N"<<tuitionAfterScholarship<<endl;
	cout<<"Hostel:"<<hostel_name<<"    "<<"Fee: N"<<hostel_price<<endl;
	cout<<"Random draw:"<<r<<"    "<<"Merit Grant: N"<<meritGrant<<endl;
	cout<<"TOTAL PAYABLE: N"<<totalPayable;



	
	
	
	
	
	return 0;
}
