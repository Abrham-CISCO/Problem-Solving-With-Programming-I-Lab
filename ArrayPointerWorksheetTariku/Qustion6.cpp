#include <iostream>
using namespace std;

int main()
{
	const int X = 4, Y = 4,x,y counter=0,data;
	bool elementFound = false;
	int twoDim[X][Y]
	for(int i = 0; i < X; i++)
		for(int j = 0; j < Y; j++)
		{
			counter++;
			cout << "Enter integer #"<<counter<<": ";
			cin >> twoDim[i][j]
		}
	cout<<endl<<endl;
	cout<<"Enter the number to be searched: ";
	cin >> data;
	for(int i = 0; i < X; i++)
		for(int j = 0; j < Y; j++)
		{
			if(twoDim[i][j] == data)
			{
				elementFound = false;
				x=i;
				y=j;
			}
		}
	if(elementFound) 
	{
		cout<<data<<" found at index ["<<x<<"]"<<"["<<y<<"]";
	}
	else
	{
		cout<<data<<" not found";
	}
	return 0;
}