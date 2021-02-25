#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int SIZE = 100;
int main()
{
    int n,nums[SIZE],i,nMin,nMax;
    bool found;
    do{
        cout << "Enter the number of elements: ";
        cin >> n;
        if(n<=0 || n>SIZE)
        {
            cout << "Number of elements should be a positive value not greater than "<<SIZE;
        }
    }while(n<=0 || n>SIZE);
    srand(time(NULL));
    for(i=0; i<n; i++)
    {
        nums[i] = rand()%901 + 100;
    }
    nMin = nMax = nums[0];
    for(i=1;i<n; i++)
    {
        if(nums[i] < nMin)
        {
            nMin = nums[i];
        }
        else if (nums[i] > nMax)
        {
            nMax = nums[i];
        }
    }
    cout << "Maximum: "<<nMax<<endl;
    cout << "Minimum: "<<nMin<<endl;
    system("pause");
    return 0;
}
