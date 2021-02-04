#include <iostream>
using namespace std;

int main()
{
    float firstNumber, secondNumber, thirdNumber, largestNumber, smallestNumber, answer;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << "Enter the third number: ";
    cin >> thirdNumber;
    largestNumber = firstNumber > secondNumber ? firstNumber : secondNumber;
    largestNumber = thirdNumber > largestNumber ? thirdNumber : largestNumber;
    smallestNumber = firstNumber < secondNumber ? firstNumber : secondNumber;
    smallestNumber = thirdNumber < smallestNumber ? thirdNumber : smallestNumber;
    answer = largestNumber / smallestNumber;
    cout << "The largest number divided by the smallest number is " << answer << endl;
    system("pause");
    return 0;
}
