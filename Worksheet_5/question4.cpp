/*
The program computes the *, /, +, - and % operation on 2 operands and returns result based on the users preference
Written By: Abrham Getachew
Written Date: 30/01/2020
*/

//ceil(2.3) >> 3;
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){

    float num1, num2, result;
    int choice;
    do{
        bool error = false;

        cout << "what do you want to do ?"<<endl;
        cout << "1. Add "<<endl;
        cout << "2. Subtract "<<endl;
        cout << "3. Multiply "<<endl;
        cout << "4. Division "<<endl;
        cout << "5. Modulo "<<endl;
        cout << "6. Exit"<<endl;

        cout << "Enter your choice: ";
        cin >> choice;
        if(choice >=1 && choice <= 5)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            switch(choice){
                case 1:
                    result = num1 + num2;
                    break;
                case 2:
                    result = num1 - num2;
                    break;
                case 3:
                    result = num1 * num2;
                    break;
                case 4:
                    if(num2 == 0){
                        cout << "Division by zero error!!!"<<endl;;
                        error = true;
                    }
                    else
                    {
                        result = num1/num2;
                    }
                    break;
                case 5:
                    if(floor(num2)==0){
                        cout << "Modulo by zero error!!"<<endl;
                    }
                    else
                    {
                        result = (int)num1%int(num2);
                    }
                    break;
                }
            if(!error){
                cout << "Result: "<<result<<endl;
            }
            }
        else if(choice!=6)
        {
            cout<<"Invalid menu choice!!!"<<endl;
        }
    }while(choice !=6);
    system("pause");
    return 0;
}
