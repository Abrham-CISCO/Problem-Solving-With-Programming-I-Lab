#include <iostream>
using namespace std;
int main()
{
    char str[50];
    int i = 0, number1, number2, number3,temp;
    cout << "Enter a number: ";
    cin.getline(str,150);
    while(str[i] != 0)
    {
        number1 = (int(str[i]) - 48);
        number2 = (int(str[i+1]) - 48);
        number3 = (int(str[i+2]) - 48);
        if(number1 % 2 != 0)
        {
            if(number2 % 2 != 0)
            {
                if(temp != number1) cout<<number1<<"-";
                cout<<number2;
                if(number3%2 != 0) cout<<"-";
                temp = number2;
            }
            if(str[i+1] == 0 && temp != number1) cout<<(int(str[i]) - 48);
        }
        else cout<<str[i];
        i++;
    }
    return 0;
}
