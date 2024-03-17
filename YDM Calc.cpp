/* MUHAMMAD HAYYAN
23i-2041__CY_A
Assignment#3 Q6 */

#include<iostream>
using namespace std;

int main()
{
	//Program that takes input as days and convert them into years months and days
	
	int num, years, months, days;
	
	cout<< "\nEnter number of days: ";
	cin>> num;
	
	years = num/365;		//Calculates Number of years
	
	months = (num%365)/30;	//Calculates Number of months
	
	days = (num%365)%30;	//Calculates Number of days
	
	cout<<years<< " years " <<months<< " months " <<days<< " days.";
	
	return 0;
	
}
	
	
	
