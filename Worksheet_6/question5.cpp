#include <iostream>
using namespace std;

int main()
{
    float temp[7], average, sum=0.0;
    for(int i = 0; i<7; i++)
    {
        cout<<"Enter the templerature of day "<<i + 1<<": ";
        cin>>temp[i];
    }
    for(int i = 0; i<7; i++)
    {
        sum += temp[i];
    }
    average = sum/7;
    cout << "The average Temperature of the week is "<<average;

    return 0;
}
