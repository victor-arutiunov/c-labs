#include <iostream>
using namespace std;
int main()
{
    float x, y, sum, dif;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    sum = x + y;
    dif = x - y;

    cout << "sum=" << sum;
    cout << "\ndifference=" << dif;

    return 0;
}