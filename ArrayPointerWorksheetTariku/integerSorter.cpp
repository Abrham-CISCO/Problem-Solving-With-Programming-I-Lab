#include <iostream>

using namespace std;
int main()
{
    const int S = 10;
    int origD[S], ascD[S], dscD[S];

    for(int i = 0; i < S; i++)
    {
        cout<<"Please enter data element #"<<i+1<<" ";
        cin>>origD[i];
        system("cls");
    }
    for(int i = 0; i<S; i++)
    {
        ascD[i] = origD[i];
        dscD[i] = origD[i];
    }
    cout<<"Origional data is\n";
    for(int i = 0; i<S; i++)
    {
        cout<<origD[i]<<" ";
    }
    cout<<endl<<endl;

    int temp;
    for(int i = 0; i<S; i++)
        for(int j = S - 1; j > i; j--)
            if(ascD[j] < ascD[j-1]){
                temp = ascD[j];
                ascD[j] = ascD[j - 1];
                ascD[j - 1] = temp;
            }
    cout<<"Ascending Sorted data is\n";
    for(int i = 0; i<S; i++)
        cout<<ascD[i]<<" ";

    for(int i=0; i < S; i++)
        for(int j = S - 1; j > i; j--)
            if(dscD[j] > dscD[j-1])
            {
                temp = dscD[j];
                dscD[j] = dscD[j - 1];
                dscD[j-1] = temp;
            }
    cout<<endl<<endl<<"Descending Sorted data is\n";
    for(int i = 0; i<S; i++)
        cout<<dscD[i]<<" ";
}
