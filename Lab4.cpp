#include <iostream>
using namespace std;

int main()
{
    int minutes, seconds, hours;
    int userInput;
    system("cls");
    cout << "Seconds : ";
    cin >> userInput;
    minutes = userInput / 60;
    seconds = userInput % 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    cout << hours <<":"<<minutes<<":"<<seconds<<endl;
    system("pause");
    return 0;
}
