/*
This program calculates the parking fare for customer with who park their cars in a parking lot
the program is built to consider the vehicle types of bus, truck and car.

Written by: Abrham Getachew
Written Date : 16/2/2021

*/
#include <iostream>
using namespace std;
const int oneHour = 60;


int main()
{
 char vehicleType;
 float cost = 0.0;
 int timeInMinute, timeInHour, timeOutMinute, timeOutHour, parkedMinutes, parkedHours, remainingMinutes, penny, dolar;
 char c, d;

 cout << "Vehicle Type: "<<endl;
 cout << "Enter C for Car"<<endl;
 cout << "Enter T for Truck"<<endl;
 cout << "Enter B for Bus"<<endl;
 cin >> vehicleType;
//validation
 while(!(vehicleType == 'C' || vehicleType == 'T' || vehicleType == 'B'))
 {
	cout << "Invalid Input! Please try again."<<endl;
 	cout << "Vehicle Type: "<<endl;
 	cout << "Enter C for Car"<<endl;
 	cout << "Enter T for Truck"<<endl;
 	cout << "Enter B for Bus"<<endl;
 	cin >> vehicleType;
 }  
	cout << "Enter the time the vehicle entered the Lot, as hour:minute" <<endl;
	cin >> timeInHour >> c >>timeInMinute;
	while(c != ':' || timeInMinute > oneHour || timeInMinute < 0 || timeInHour < 0 || isdigit(timeInMinute) || isdigit(timeInHour))
	{
		cout << "Invalid Input! Please try again."<<endl;
		cout << "Enter the time the vehicle entered the Lot, as hour:minute" <<endl;
		cin >> timeInMinute >> c >> timeInHour;
	} 	

	cout << "Enter the time the vehicle left the Lot, as hour:minute" <<endl;
	cin >> timeOutHour >> d >>timeOutMinute;
	while(d != ':' || timeOutMinute > oneHour || timeOutMinute < 0 || timeOutHour < 0 || isdigit(timeOutMinute) || isdigit(timeOutHour))
	{
		cout << "Invalid Input! Please try again."<<endl;
		cout << "Enter the time the vehicle left the Lot, as hour:minute" <<endl;
		cin >> timeOutMinute >> d >> timeOutHour;
	} 	
	parkedMinutes = (timeOutMinute + timeOutHour * oneHour) - (timeInMinute + timeInHour * oneHour); 
	parkedHours = parkedMinutes / oneHour; //consider integer division
	remainingMinutes = parkedMinutes % oneHour;
	cout << "   PARKING LOT CHARGE  "<<endl;
	if(vehicleType == 'C')
	{
		if(parkedHours >= 4)
		{
			cost += (parkedHours - 3) * 1.5;	
		}
		cout << "Type of vehicle: Car"<<endl;
	}
	else if(vehicleType == 'T')
	{ 
		if(parkedHours > 2)
		{
			cost = 2;
			cost += (parkedHours - 2) * 2.3; 	
		}
		else
		{
			cost = (parkedHours) * 1;
		}
		cout << "Type of vehicle: Truck"<<endl;
	}
	else if(vehicleType == 'B')
	{
		if(parkedHours > 1)
		{
			cost = 2;
			cost += (parkedHours - 1) * 3.70; 	
		}
		else
		{
			cost = (parkedHours) * 2;
		}
		cout << "Type of vehicle: Bus"<<endl;
	}
	dolar = cost;
	penny = (cost - dolar) * 100;
	cout << "TIME - IN               "<<timeInHour<<":"<<timeInMinute<<endl;
	cout << "TIME - OUT              "<<timeOutHour<<":"<<timeOutMinute<<endl<<endl;
	cout << "                       _______"<<endl;
	cout << "PARKING TIME            "<<parkedHours<<":"<<remainingMinutes<<endl;
	cout << "ROUNDED TOTAL           "<<parkedHours<<endl<<endl;
	cout << "                       _______"<<endl;
	cout << "TOTAL CHARGE            $"<<dolar<<":"<<penny<<endl;
	return 0;
}