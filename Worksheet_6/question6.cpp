#include <iostream>
using namespace std;
const int SIZE = 100;
int main()
{
    int n,i,target,nums[SIZE];
    bool found;
    do{
        cout << "Enter the number of elements: ";
        cin >> n;
        if(n<=0 || n>SIZE)
        {
            cout << "Number of elemebts should be a positive value not greater than "<<SIZE;
        }
    }while(n<=0 || n>SIZE);
    for(i=0; i<n; i++)
    {
        cout << "Enter element "<<i + 1<<": ";
        cin >> nums[i];
    }
    cout << "Enter search target: ";
    cin >> target;
    found = false;
    for(i=0; !found && i<n; i++)
    {
        if(nums[i] == target)
        {
            found = true;
        }
    }
    if(found)
    {
        cout<<"Location: "<<i-1<<endl;
    }
    else
    {
        cout << "Target not found!"<<endl;
    }
    system("pause");
    return 0;
}
