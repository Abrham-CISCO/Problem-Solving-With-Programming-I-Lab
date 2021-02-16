/* This program displays 

5 4 3 2 1 2 3 4 5                                                                                                               
  5 4 3 2 3 4 5                                                                                                                 
    5 4 3 4 5                                                                                                                   
      5 4 5                                                                                                                     
        5                                                                                                                       
      5 4 5                                                                                                                     
    5 4 3 4 5                                                                                                                   
  5 4 3 2 3 4 5                                                                                                                 
5 4 3 2 1 2 3 4 5

Written By: Abrham Getachew
Written Date: 16/2/2021 

*/
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