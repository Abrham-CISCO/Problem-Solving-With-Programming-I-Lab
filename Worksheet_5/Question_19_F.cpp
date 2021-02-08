#include <iostream>

using namespace std;

int main()
{
    for(int i=6;i>1;i--)
    {
        for(int j = 2; j <i; j++)
        {
            cout<<"  ";
        }
        for(int j = i - 1; j<=5; j++)
        {
            cout<<j<<" ";
        }
        for(int j = 4; j>i-2; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<6;i++)
    {
        for(int j = 0; j <i; j++)
        {
            cout<<"  ";
        }    
        for(int j = i+1; j <6; j++)
        {
            cout<<j<<" ";
        }
        for(int j = 4; j>i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
