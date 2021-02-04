/*This program computes the roots of a quadratic equation
Written date : 23/1/2021
Written by : Abrham Getachew
*/

#include <iostream>
#include <cmath>
using namespace std;
#include <stdlib.h>
int main()
{
    float a,b,c, root1, root2, disc;
    cout << "Enter the coefficients separated by space: ";
    cin >> a >> b >> c;
    disc = b * b - 4 * a * c;
    if(disc > 0)
    {
        root1 = (-b + sqrt(disc))/ (2 * a);
        root2 = (-b - sqrt(disc))/ (2 * a);

        cout<<"The equation has two roots. "<< endl;
        cout<<"root1: "<<root1<<endl;
        cout<<"root2: "<<root2<<endl;
    }
    else if (disc == 0)
    {
        root1 = root2 = -b/ (2 / a);
        cout << "The equation has one root. "<<endl;
        cout << "root: "<<root1;
    }
    else
    {
        cout << "The equation has no real root."<<endl;
    }
    system("pause");
    return 0;
}
