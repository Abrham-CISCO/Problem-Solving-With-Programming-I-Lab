/* The program accepts a long integer and reverse the digits */

#include <iostream>
using namespace std;

int main()
{
    unsigned int n,rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n!=0){
        rev = rev * 10 + n%10;
        n=n/10;
    }
    cout << "Reversed: " << rev <<endl;
    system("pause");
    return 0;
}
