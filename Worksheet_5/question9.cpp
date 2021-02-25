#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned int n, m, n0, m0, lcm, gcd, tmp;
    char ans;
    bool stop;
    do
    {
        stop=false;
        system("cls");
        cout << "Enter the two numbers separated by space: ";
        cin>>n>>m;
        n0 = n;
        m0 = m;
        do{
            if(n<m){
                tmp=n;
                n=m;
                m=tmp;
            }
            if(n%m == 0)
            {
                stop=true;
            }
            else
            {
                n=n-m;
            }
        }while(stop==false);
        gcd =m;
        lcm = (n0*m0)/gcd;
        system("cls");
        cout << "GCD("<<n<<", "<<m<<") = "<<gcd<<endl;
        cout << "LCM("<<n<<", "<<m<<") = "<<lcm<<endl;
        cout <<"Do you want to repeat? (y/Y for yes)? ";
        cin >> ans;
    }
    while(ans=='y' || ans=='Y');
    return 0;
}
