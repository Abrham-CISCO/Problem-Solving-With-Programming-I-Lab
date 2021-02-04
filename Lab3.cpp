#include <iostream>
using namespace std;
#define PI 3.14
const float HALF_ANGLE = 180;
int main()
{
    float degree, radian;
    cout << "Enter degree : ";
    cin >> degree;
    radian = (PI * degree)/HALF_ANGLE;
    cout << "Radian : " << radian;
    system("pause");
    return 0;
}
