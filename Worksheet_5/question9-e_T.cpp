/* 5 4 3 2 1 2 3 4 5
     4 3 2 1 2 3 4
       3 2 1 2 3
         2 1 2
           1
written by : Abrham Getachew
written Date : 20/1/2020
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int n, i ,j;
    cout << "Enter a number between 0 and 9: ";
    cin >> n;
    for(i = 1; i<=n; i++) {
        for(j = 1; j<i; j++){
            cout <<"  ";
        }
        for(j = n; j>=i; j--){
            cout <<j<<" ";
        }
        for(j = i + 1; j<=n; j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
