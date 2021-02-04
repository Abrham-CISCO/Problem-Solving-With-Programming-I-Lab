/*
This program computes the gross pay, witholding and net pay
of an employee given the no of hours worked and number of dependants
written date 23/1/2020
written by Abrham Getachew
*/

#include <iostream>
#include <iomanip>
using namespace std;
#include <stdlib.h>

const float SOCIAL_SECURITY_TAX = 0.06;
const float FEDRAL_INCOME_TAX = 0.14;
const float STATE_INCOME_TAX = 0.05;
const float UNION = 10.0;
const float INSURANCE = 15;
const float REGULAR_RATE = 16.78;
const float REGULAR_HOURS = 40.0;
const float HOURS_IN_WEEKS = 168.0;
const unsigned short DEPENDANT_LIMIT = 2;
const float OVER_RATE = 1.5 * 16.78;
int main()
{
    float hours, grossPay, withholding, netPay;
    unsigned short noDependants;
    //getting input
    cout << "Enter hours worked: ";
    cin >> hours;
    //validation
    if(hours>=0 && hours<= HOURS_IN_WEEKS)
    {
        cout << "Enter number of dependents: ";
        cin >> noDependants;
        if(noDependants >= 0)
        {
            //Process
            if(hours <= REGULAR_HOURS)
            {
                grossPay = hours * REGULAR_RATE;
            }
            else
            {
                grossPay = REGULAR_RATE * REGULAR_HOURS + (hours - REGULAR_HOURS) * OVER_RATE;
            }
            withholding = (SOCIAL_SECURITY_TAX + FEDRAL_INCOME_TAX + STATE_INCOME_TAX) * grossPay + UNION;
            if(noDependants > DEPENDANT_LIMIT)
            {
                withholding += (noDependants - DEPENDANT_LIMIT) * INSURANCE;
            }
            netPay = grossPay - withholding;
            //Output

            system("cls"); //from stdlib.h library
            cout<<"Payment Report "<<endl;
            cout<<"---------------"<<endl;
            //fixed means >> 12.3, exponential means >> 1.23
            cout<<fixed<<setprecision(2);
            cout<<left<<setw(16)<<"Gross Pay: "<<"$"<<setfill('*')<<right<<setw(10)<<grossPay<<endl;
            cout<<setfill(' ')<<left<<setw(16)<<"Withholding: "<<"$"<<setfill('*')<<right<<setw(10)<<withholding<<endl;
            cout<<setfill(' ')<<left<<setw(16)<<"Net pay: "<<"$"<<setfill('*')<<right<<setw(10)<<netPay<<endl;
            }
            else
                {
                    cout << "Invalid values for number of dependants!!!"<<endl;
                }
        }
        else
        {
            cout << "invalid value for hours worked!!!"<<endl;
        }
    system("pause");
    return 0;
}
