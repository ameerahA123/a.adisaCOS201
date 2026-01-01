//file handling in c++
#include <fstream> //file manipulation
#include <iostream> //input and output
#include <string>//to handle string

#include <string> //Always import string
using namespace std;


int main(){
	//ofstream ===> write to a file (output)
	//ifstream ===> read from a a file (input)
	//fstream ===> read and write
	

    int sum;
    //reading integers file
    ifstream insidefile("data.txt");
    if (!insidefile){
    	cout<<"cannot open file";
    	return 0;
	}
    
    int arr[4]; //add the  numbers from the file to the arrahy
    int number;
    int max=0;
    while(insidefile >> number){
    	cout<<number;
    	sum = sum + number;
    	if (number>max){  //To find the maximum number
    		max = number;
		}
		arr.push_back(number);
    	
	}
	cout<<"The sum is "<<sum<<endl;
	cout<<"The max is "<<max<<endl;
	cout<<arr<<endl;


	insidefile.close();



	
	
	
	
	
	
	return 0;
}