#include <iostream>
using namespace std;

int main()
{
    float n, lowerLimit, higherLimit, mid, error, epsion;
    do{
        cout<<"Enter the number: ";
        cin >>n;
        if (n<0) cout <<"No Negative"<<endl;
    }while(n<0);
    epsion = 0.00000001;
    lowerLimit = 0;
    higherLimit = n;
    do
    {
        mid = (higherLimit - lowerLimit)/2;
        error = n - mid * mid;
        if(error<0)
        {
            higherLimit = mid;
            error = error * (-1);
        }
        else
        {
            lowerLimit = mid;
        }
    } while (error > epsion);
    //if(mid<0) mid*=(-1);
    cout<<endl<<"Square Root : "<<mid;
    return 0;
}
