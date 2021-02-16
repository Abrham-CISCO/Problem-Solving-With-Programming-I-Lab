#include <iostream>

using namespace std;

int main()
{
    bool isLeapYear = false, invalidDay = false;
    unsigned short int year=0, month=0, day=0, previousDay,
    previousMonth, previousYear;
    char c,c2;
    // cout<<"Enter Year: "<<endl;
    // cin >> year;
    cout << "Enter day in day/month/year format: ";
    cin >> day>>c>>month>>c2>>year;
    // validate input
    while(c!='/' || c2!='/' || year==0 || month==0 || day==0)
    {
        cout << "Invalid Format!"<<endl;
        cout << "Enter day in day/month/year format: ";
        cin >> day>>c>>month>>c2>>year;
    }
    while (year<=1581)
    {
        cout<<"Gregorian calander has taken effect after 1582. Thus"<<endl;
        cout<<"can not compute previous date for the year of "<<year<<endl;
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
    if(day == 1)
    {
        switch(month){
            case 1:
                previousDay = 31;
                previousMonth = 12;
                previousYear = year - 1;
                break;
            case 2:
                previousDay=31;
                break;
            case 3:
                if(isLeapYear == true)
                {
                    previousDay = 29;
                }
                else
                {
                    previousDay = 28;
                }
                break;
            case 4:
                previousDay=31;
                break;
            case 5:
                previousDay=30;
                break;
            case 6:
                previousDay=31;
                break;
            case 7:
                previousDay=30;
                break;
            case 8:
                previousDay=31;
                break;
            case 9:
                previousDay=31;
                break;
            case 10:
                previousDay=30;
                break;
            case 11:
                previousDay=31;
                break;
            case 12:
                previousDay=30;
                break;
        }
    }
    else
    {
        previousDay = day - 1;
    }
    if(month!=1 && day == 1) 
    {
        previousMonth = month - 1;
    }
    else
    {
        previousMonth = month;     
    }
    if(month!=1) 
    {
        previousYear = year;
    }

    cout<<"The previous day is ";
    cout<< previousDay<<"/"<<previousMonth<<"/"<<previousYear;
}