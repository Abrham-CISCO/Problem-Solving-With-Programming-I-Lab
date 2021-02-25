#include <iostream>

using namespace std;

int main()
{
    int num[5]={}, number, digitCount=0;
    cout<<"Enter a number: ";
    cin >> number;
    while(number>0)
    {
        num[4-digitCount] = number%10;
        digitCount++;
        number/=10;
    }
    for(int i=0; i<5; i++)
    {
        for(int j=i; j<5; j++)
        {
            cout << num[j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}