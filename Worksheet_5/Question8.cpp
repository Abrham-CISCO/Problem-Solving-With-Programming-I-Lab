/*
This program computes and displays the next date of the specific date in Gregorian calander
Written By: Abrham Getachew
Written Date: 16/2/2021
*/

#include <iostream>
using namespace std;

int main()
{
    bool isLeapYear = false, invalidDay = false;
    unsigned short int year=0, month=0, day=0, nextDay,
    nextMonth, nextYear;
    char c,c2;
    cout << "Enter day in day/month/year format: ";
    cin >> day>>c>>month>>c2>>year;
    while(c!='/' || c2!='/' || year==0 || month==0 || day==0)
    {
        cout << "Invalid Format!"<<endl;
        cout << "Enter day in day/month/year format: ";
        cin >> day>>c>>month>>c2>>year;
    }
    while (year<=1581)
    {
        cout<<"Gregorian calander has taken effect after 1582. Thus"<<endl;
        cout<<"can not compute next date for the year of "<<year<<endl;
        cout<<"Please Try again"<<endl;
        cout<<"Enter Year: "<<endl;
        cin >> year;
    }
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
    {
        isLeapYear = true;
    }
    // cout<<"Enter month: ";
    // cin >> month;
    while (month>12 || month<1)
    {
        cout<<"Invalid month Month should be in 1 - 12 range"<<endl;
        cout<<"Please try again"<<endl;
        cout<<"Enter month: ";
        cin >> month;
    }
    do
    {
        if(invalidDay)
        {
            cout<<"Invalid day!"<<endl;
            cout<<"Please Try again"<<endl;
            cout<<"Enter day: ";
            cin>>day;
        }
        invalidDay = false;
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        {
            if(day>31 || day <1) invalidDay = true;
        }
        else if(month==4 || month==6 || month==9 || month==11)
        {
            if(day>30 || day <1) invalidDay = true;            
        }
        else
        {
            if(isLeapYear == true)
            {
                if(day>29 || day<1) invalidDay ==true;
            }
            else
            {
                if(day>28 || day<1) invalidDay ==true;
            }
            
        }
    }while(invalidDay);
    if(month == 12 || month == 10 || month == 8 || month == 7 || month == 5 || month == 3 || month == 1)
    {
	if(day == 31)
	{
		if(month == 12)
		{
			nextMonth = 1;
			nextYear = year + 1;
		}
		else
		{	nextYear = year;
			nextMonth = month + 1;
		}
		nextDay = 1;
	}
	else
	{
		nextMonth = month;
		nextYear = year;
		nextDay = day + 1;
	}
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
	if(day == 30)
	{
		nextMonth = month + 1;
		nextDay = 1;
	}
	else
	{
		nextMonth = month;
		nextYear = year;
		nextDay = day + 1;
	}
    }
    else
    {
	if(isLeapYear)
        {
		if(day == 29)
		{
			nextMonth = month + 1;
			nextDay = 1;
		}
		else
		{
			nextMonth = month;
			nextYear = year;
			nextDay = day + 1;
		}
        }
        else
        {
		if(day == 28)
		{
			nextMonth = month + 1;
			nextDay = 1;
		}
		else
		{
			nextMonth = month;
			nextYear = year;
			nextDay = day + 1;
		}
        }
    }
    cout<<"The next day is ";
    cout<< nextDay<<"/"<<nextMonth<<"/"<<nextYear;
}