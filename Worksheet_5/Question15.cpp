/* This following program accepts integer of any base from 1 to 10 and converts it 
any user defined base(1 - 10).
Written By: Abrham Getachew
Written Date 15/2/2021
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int desiredBase, inputBase, inputNumber, tempInputNumber, convertedNumber, lastDigit, digitCount =0, x = 0, reminder, counter=0;
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
		reminder=x%desiredBase;
		x = x / desiredBase;
		convertedNumber += pow(10,counter) * reminder;
		counter++;
	}
	cout << "The base "<<desiredBase<<" of "<<tempInputNumber<<" with initial base of "<<inputBase<<" is "<<convertedNumber;
	return 0;
}