#include <iostream>

/* This program allows the user to create an estimate of the cost to build a table.
The program will continue repeating until the user specifically
states that they do not want any additional estimates.
Written By: Hiwot Workneh and Abrham Getachew
Written Date: 5/03/2021 G.C
*/

using namespace std;
const float PI = 3.14159f;
int main()
{
    unsigned short int tableCounter=0, choice;
    bool stop = false;
    float totalCost=0, length, width, diameter, tableCost, area;
    do{
        do
        {
            cout << "Welcome to Tables - Yours One Stop Table Shop"<<endl;
            cout << "Hiwot and Abrham - Master Table Builder"<<endl;
            cout << "What shape of table do you want to build?"<<endl;
            cout << "1. Rectangular"<<endl;
            cout << "2. Square"<<endl;
            cout << "3. Circular"<<endl;
            cout << "4. End"<<endl;
            cout << "Enter menu entry: ";
            cin >> choice;
            if(choice>4 || choice <1)
            {
                cout<<"Error – Invalid Entry. Please reenter a valid value"<<endl;
            }
        }while(choice>4 || choice <1);
        switch(choice)
        {
            case 1:
                do
                {
                    cout <<  "Enter the length of the table (in inches): ";
                    cin >> length;
                    if(length < 1)
                    {
                        cout <<  "Error – Length must be greater than zero. Please reenter a valid value";
                    }
                }while(length < 1);
                do
                {
                    cout <<  "Enter the width of the table (in inches): ";
                    cin >> width;
                    if(width < 1)
                    {
                        cout <<  "Error – Width must be greater than zero. Please reenter a valid value";
                    }
                }while(width < 1);
                area = length * width;
                tableCounter++;
                break;
            case 2:
                    do
                    {
                        cout <<  "Enter the length of the table (in inches): ";
                        cin >> length;
                        if(length < 1)
                        {
                            cout <<  "Error – Length must be greater than zero. Please reenter a valid value";
                        }
                    }while(length < 1);
                    area = length * length;
                    tableCounter++;
                break;
            case 3:
                    do{
                        cout <<  "Enter the diameter of the table (in inches):  ";
                        cin >> diameter;
                        if(diameter < 1)
                        {
                            cout <<  "Error – Diameter must be greater than zero. Please reenter a valid value";
                        }
                    }while(diameter < 1);
                    area = (diameter * diameter * PI) / 4;
                    tableCounter++;
                break;
            case 4:
                system("cls");
                if(tableCounter == 1)
                {
                    cout <<  "The total cost of 1 table you estimated is $"<<totalCost<<endl;
                }
                else
                {
                    cout <<  "The total cost of the " << tableCounter << " tables you estimated is $" << totalCost<<endl;
                }
                cout <<  "Thank you for using the table cost estimation program!"<<endl;
                cout <<  "Goodbye!!!";
                stop = true;
                break;
        }
        if(!stop)
        {
            do{
                cout << "What type of material do you want to use?"<<endl;
                cout << "1.Laminate ($0.125 per square inch)"<<endl;
                cout << "2.Oak ($0.25 per square inch)"<<endl;
                cout << "Enter menu entry: ";
                cin >> choice;
                if(choice > 2 || choice < 1)
                {
                    cout << "Error – Invalid Entry. Please reenter a valid value"<<endl;
                }
            }while(choice > 2 || choice < 1);
            system("cls");
            switch(choice)
            {
                case 1:
                    tableCost = area * 0.125;
                    totalCost = totalCost + tableCost;
                    cout << "The area of the table is " << area << " square inches"<<endl;
                    cout << "The table will be made of Laminate"<<endl;
                    break;
                case 2:
                    tableCost = area * 0.25;
                    totalCost = totalCost + tableCost;
                    cout << "The area of the table is " << area << " square inches"<<endl;
                    cout << "The table will be made of oak"<<endl;
                    break;
            }
            cout<<endl;
        }
    }
    while(!stop);
    return 0;
}
