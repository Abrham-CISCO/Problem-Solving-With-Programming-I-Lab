/*

This program changes a number from a given base to any desired base.
To do this it first converts the given number from the given base to base 10
and finally converts the the converted base 10 number to the desired base.

Written By: Abrham Getachew
Written Date : 16/2/2021

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int desiredBase, inputBase, tempInputBase, inputNumber, tempInputNumber, convertedNumber, digitCount =0, x = 0,lastDigit, y, counter=0;
bool invalidBase = false;
	cout<<"Enter a positive integer: ";
	cin >> inputNumber;
	while(inputNumber < 0)
	{
		cout << "Error! you can not enter a negative integer! "<<endl;
		cout << "Please Try Again!"<<endl;
		cout<<"Enter a positive integer: ";
		cin >> inputNumber;		
	}
    tempInputNumber = inputNumber;
	do
	{
	    if(invalidBase)
    	{
        	cout << "Error! The defined base does is too small "<<endl;   	    
    	}
    	invalidBase = false;
    	cout << "What is the base of "<<inputNumber<<"?(must be 1 - 10) : ";
    	cin >> inputBase;
    	while(inputBase < 0 || inputBase > 11)
    	{
    		cout << "Error! Base must be between 1 and 10 "<<endl;
    		cout << "Please Try Again!"<<endl;
    	    cout << "What is the base of "<<inputNumber<<"?(must be 1 - 10) : ";
    	    cin >> inputBase;
    	}

    	while(tempInputNumber>0)
    	{
    	    if(!(tempInputNumber % 10 < inputBase))
    	    {
    	        invalidBase = true;
    	    }
    	    tempInputNumber /= 10;
    	}
    	tempInputNumber = inputNumber;
	}while(invalidBase);
	cout << "To what base do you want to convert "<<inputNumber<<"?(must be 1 - 10) : ";
	cin >> desiredBase;
	while(desiredBase < 0 || desiredBase > 11)
	{
		cout << "Error! Base must be between 1 and 10 "<<endl;
		cout << "Please Try Again!"<<endl;
	    cout << "To what base do you want to convert "<<inputNumber<<"?(must be 1 - 10) : ";
	    cin >> desiredBase;
	}
	tempInputNumber = inputNumber;
    while(inputNumber>0)
    {
        //Here note that each digit can not exceed inputBase - 1. if it does then this is a logical error.
        lastDigit = inputNumber % 10;
        x += pow(inputBase, digitCount) * lastDigit;
        digitCount++;
        inputNumber /= 10;
    }
    while(x>0)
    {
        y=x%desiredBase;
        x = x / desiredBase;
        convertedNumber += pow(10,counter) * y;
        counter++;
    }
    cout << "The base "<<desiredBase<<" of "<<tempInputNumber<<" with initial base of "<<inputBase<<" is "<<convertedNumber;
	return 0;
}