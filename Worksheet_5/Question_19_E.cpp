#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout<<"  ";            
        }
        for(int j = 5; j >= i; j--)
        {
            cout<<j<<" ";            
        }
        for(int j = i+1; j <= 5; j++)
        {
            cout<<j<<" ";            
        }
        cout <<endl;
    }
    for(int i = 5; i > 1; i--)
    {
        for(int j = 2; j < i; j++)
        {
            cout<<"  ";
        }
        for(int j = 5; j + 2 > i ; j--)
        {
            cout<<j<<" ";
        }
        for(int j = i; j  <= 5 ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
