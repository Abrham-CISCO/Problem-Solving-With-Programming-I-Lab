#include <iostream>

using namespace std;

int main()
{
    const int S = 5;
    int oneDim[S];
    int data, freq = 0;

    for(int i = 0; i < S; i++)
    {
        cout << "Enter element #"<<i+1<<" ";
        cin >> oneDim[i];
        system("cls");
    }

        cout<<endl<<endl<<"Enter data to look for >>> ";
        cin>>data;

        for(int i = 0; i < S; i++)
        {
            if(oneDim[i] == data)
                freq++;
        }
        cout<<endl<<data<<" occurs "<<freq<<" times in your database"<<endl;
    return 0;
}
