#include <iostream>
using namespace std;
const int MONDAY = 0;
const int TUESDAY = 1;
const int WEDENESDAY = 2;
const int THURSDAY = 3;
const int FRIDAY = 4;
const int SATURDAY = 5;
const int SUNDAY = 6;
const int SIZE = 7;
int main()
{
    float temp[SIZE], sum, average;
    int day;
    for(day=0, sum=0; day<SIZE; day++)
    {
        cout << "Enter temperature for ";
        switch(day){
        case MONDAY:
            cout << "monday: ";
            break;
        case TUESDAY:
            cout << "tuesday: ";
            break;
        case WEDENESDAY:
            cout << "wedenesday: ";
            break;
        case THURSDAY:
            cout << "thursday: ";
            break;
        case FRIDAY:
            cout << "friday: ";
            break;
        case SATURDAY:
            cout << "saturday: ";
            break;
        case SUNDAY:
            cout << "sunday: ";
            break;
        }
        cin >> temp[day];
        sum += temp[day];
    }
    average = sum / SIZE;
    cout << "Average temperature for the week : "<<average<<endl;
    system("pause");
    return 0;
}
