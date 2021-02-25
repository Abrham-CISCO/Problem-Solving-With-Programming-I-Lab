/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
const float upTV = 400.00, upVCR = 220.00, upRC = 35.20, upCDP = 300.00, upTR = 150.00;
int main()
{
    int qTV, qVCR,qRC,qCDP,qTR;
    float tTV, tVCR, tRC, tCDP, tTR, total, tax, subtotal;
    cout << "Enter the quantity of TV: ";
    cin >> qTV;
    cout << "Enter the quantity of VCR: ";
    cin >> qVCR;
    cout << "Enter the quantity of Remote Controller: ";
    cin >> qRC;
    cout << "Enter the quantity of CD Player: ";
    cin >> qCDP;
    cout << "Enter the quantity of Tape Recorder: ";
    cin >> qTR;
    tTV = upTV * qTV;
    tVCR = upVCR * qVCR;
    tRC = upRC * qRC;
    tCDP = upCDP * qCDP;
    tTR = upTR * qTR;
    subtotal = tTV + tVCR + tRC + tCDP + tTR;
    tax = subtotal * 0.0825;
    total = subtotal + tax;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<left<<setw(4)<<"QTY";
    cout<<setw(15)<<"DESCRIPTION"<<setw(9)<<"UNIT";
    cout<<setw(7)<<"TOTAL";
    cout<<endl;
    cout<<fixed<<setprecision(2)<<left<<setw(4)<<"";
    cout<<setw(15)<<""<<setw(9)<<"PRICE";
    cout<<setw(7)<<"PRICE";
    cout<<endl<<left<<setw(4)<<"___";
    cout<<setw(15)<<"__________"<<setw(9)<<"______";
    cout<<setw(7)<<"______";
    cout<<endl<<left<<setw(4)<<qTV;
    cout<<setw(15)<<"TV"<<setw(6)<<right<<upTV;
    cout<<setw(9)<<tTV;
    cout<<endl<<left<<setw(4)<<qVCR;
    cout<<setw(15)<<"VCR"<<setw(6)<<right<<upVCR;
    cout<<setw(9)<<tVCR;
    cout<<endl<<left<<setw(4)<<qRC;
    cout<<setw(15)<<"REMOTE CTRLR"<<setw(6)<<right<<upRC;
    cout<<setw(9)<<tRC;
    cout<<endl<<left<<setw(4)<<qCDP;
    cout<<setw(15)<<"CD PLAYER"<<setw(6)<<right<<upCDP;
    cout<<setw(9)<<tCDP;
    cout<<endl<<left<<setw(4)<<qTR;
    cout<<setw(15)<<"TAPE RECORDER"<<setw(6)<<right<<upTR;
    cout<<setw(9)<<tTR;
    cout<<endl<<endl;
    cout<<setw(15)<<""<<left<<setw(8)<<"SUBTOTAL"<<setw(11)<<right<<subtotal<<endl;
    cout<<setw(15)<<""<<left<<setw(8)<<"TAX"<<setw(11)<<right<<tax<<endl;
    cout<<setw(15)<<""<<left<<setw(8)<<"TOTAL"<<setw(11)<<right<<total<<endl;

    return 0;
}
