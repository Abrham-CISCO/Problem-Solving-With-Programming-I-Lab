/*
This Program displays the prime factorization of a positive natural number
Written By: Abrham Getachew
Written Date: 16/02/2021
*/

#include <iostream>
using namespace std;

int main()
{
 int numb, temp, i=2;
 cout << "Enter the Number to Factor : ";
 cin >> numb;
 temp = numb;
 cout<<numb<<" = 1";
 while(numb>2)
 {
   if(numb % i == 0)
   {
	cout<<" x "<<i;
	numb = numb/i;
   }
   else
   {
	i++;
   }
 }
  return 0;
}