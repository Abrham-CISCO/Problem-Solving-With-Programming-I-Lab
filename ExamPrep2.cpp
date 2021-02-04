#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, X, K = 1, sign=1, sum=0, j=0, i=0;
    cin >> N;
    cin >> X;
    while(i<=N)
    {
        sign = pow((-1),(i+2));
        sum += sign * pow(X,i);
        ++i;
    }
    char a = 6, b = 4;
    cout<<a%b<<endl;
    system("pause");
    return 0;
}
