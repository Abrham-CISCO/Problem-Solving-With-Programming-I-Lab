#include <iostream>
using namespace std;
//Prime number is a number that is divisiable by 1 and itself only.
//Every integer is divisable by 1, so to check if an integer is a prime number
//just check if it is only divisable by itself
int main()
{
	int n, counter=1, counter2;
	int primeFlag = 1;
	cout << "Enter a positive integer: ";
	cin >> n;
	while(counter<=n)
	{
	    counter2 = 2;
	    primeFlag = 1;
		while(counter2 < counter)
		{
			if((counter % counter2 == 0)) primeFlag = 0;
			counter2++;
		}
		if(primeFlag)
		{
		    cout<<counter<<" ";
		    primeFlag = 1;

		}
		counter++;
	}

 return 0;
}
