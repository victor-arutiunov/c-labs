#include <iostream>
using namespace std;
int main()
{
    float x, y, prod, div;
    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    prod = x * y;
    div = x / y;

    cout << "prod=" << prod;
    cout << "\ndiv=" << div;

    return 0;
}