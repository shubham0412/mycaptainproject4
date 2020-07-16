#include<iostream>
using namespace std;

int main(){
	
	// Create a integer parameter called age
	int age;
	
	// Ask user to input candiate's age 
	cout<< "Enter the candidate age: ";
	cin>> age;
	
	// output for age between 18 and 115 as 115 taken as longest age of a person
	if (age>=18 and age<=115)
	{
		cout<< "The candidate is eligible for voting";
	}
	else if (age<18 and age>0)
	{
		cout<< "The candidate is not eligible for voting. ";
		
		// How much more years required to candiate for eligible to vote
		if ((18-age)==1)
		{
		    cout<< " The candidate want " <<  18-age << " year more for eligibility";
	    }
	    else 
	    {
	        cout<< "The candidate want " <<  18-age << " years more for eligibility";  
		}
    }
	
	// For wrong input by user
	else
	{
		cout<< "ERROR";
	}
	
	return 0;
}
