#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    int n, i, j, lmt;
    bool isPrime=true;
    do{
        cout<<"Enter the number: ";
        cin>>n;
        if(n<0){
            cout << "Number should be positive!";
        }
    }while(n<0);
    lmt=sqrt(n);
    if(n!=0){
        cout << 2;
        for(i=3;i<=n; i+=2){
            isPrime=true;
            for(j=2;j<=lmt&&isPrime==true; j++)
            {
                if(i%j==0){
                    isPrime = false;
                }
            }
            if(isPrime){
                cout<<" "<<i;
            }
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}
