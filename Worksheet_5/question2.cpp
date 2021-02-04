/*
This program converts a two digit hexa decimal number into
decimal

Written Date : 23/1/2021
Written By : Abrham Getachew

*/
#include <iostream>
#include <iomanip>
using namespace std;
#include <stdlib.h>

const unsigned int BASE16 = 16;
const unsigned int BASE10 = 10;
int main(){
    char h1, h2;
    unsigned int d1, d2, decimal;
    cout << "Enter the two digit hexadecimal number: ";
    cin>>h1>>h2;
    if((h1>='a' && h1<='f' || h1>='A' && h1 <= 'F' || h1>='0' && h1<='9') && (h2>='a' && h2<='f' || h2>='A' && h2 <= 'F' || h2>='0' && h2<='9'))
    {
        if(h1 >='a' && h1 <='f')
        {
            h1 -= 32;
        }
        if(h2 >='a' && h2 <='f')
        {
            h2 -= 32;
        }
        if(h1>='A' && h1 <= 'F')
        {
            d1 = h1 - 'A' + 10;
        }
        else
        {
            d1 = h1 - '0';
        }
        if(h2>='A' && h2 <= 'F')
        {
            d2 = h2 - 'A' + 10;
        }
        else
        {
            d2 = h2 - '0';
        }
        decimal = d1 * BASE16 + d2;
        system("cls");
        cout<<"Hexadecimal to Decimal"<<endl;
        cout<<left<<setw(10)<<"Hex: "<<right<<setw(3)<<h1<<h2<<endl;
        cout<<left<<setw(10)<<"Decimal: "<<right<<setw(4)<<decimal<<endl;
    }
    else
    {
        cout<<"Invalid Hexadecimal number"<<endl;
    }
    system("pause");
    return(0);
}
