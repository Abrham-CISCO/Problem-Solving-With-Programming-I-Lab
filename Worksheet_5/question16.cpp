/* The program counts the number of words in a text and uses enter key to exit*/
#include <iostream>
using namespace std;
int main()
{
    char prv, cur;
    int noWords = 0;
    prv = ' ';
    cout<<"Enter a text: "<<endl;
    do{
        cur = cin.get();  //or cin.get(cur);
        if((prv==' ' || prv =='\t') && (cur != ' ' && cur != '\t' && cur != '\n')){
           noWords++;
        }
        prv = cur;
    }while(cur!= '\n');
    cout << "Number of words : "<< noWords <<endl;
    return 0;
}
