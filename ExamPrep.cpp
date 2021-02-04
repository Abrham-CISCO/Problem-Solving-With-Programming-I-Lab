#include <iostream>
using namespace std;

int main()
{
    int x = 2, y = 3, z = 1;
    char ch = 96;
    cout<<(x + x/6 + y)<<endl;
    cout<<(3*y+x)<<endl;
    cout<<(4+z-(x+z)%2)<<endl;
    cout<<(x-2*(3+z)+y)<<endl;
    //cout<<(z=y=x+5)<<" "<< z << " "<< z*x%y<<endl;

    //cout<<x<<y<<x++ + --y<<endl;
    cout<<++ch;
    y=x<y || z++;
    cout<<y<<": "<<z<<endl;
    system("pause");
    return 0;
}
