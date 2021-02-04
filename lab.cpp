#include <iostream>
using namespace std;
float PROFIT_FACTOR = 0.15;
int main()
{
    float cost, price;
    cout << "Enter the cost: ";
    cin >> cost;
    price = cost + cost * PROFIT_FACTOR;
    cout << "The price is " << price << endl;
    system("pause");
    return 0;
}
