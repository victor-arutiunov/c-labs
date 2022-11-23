#include <iostream>
#include <math.h>
using namespace std;

float count_a(float x, float y)
{
    float numerator = sqrt(abs(x - 1.0)) - pow(abs(y), 1.0 / 3);
    float denominator = 1.0 + pow(x, 2.0) / 2.0 + pow(y, 2.0) / 4.0;
    float result = numerator / denominator;

    return result;
}

int main()
{
    float x, y, z;
    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << "z = ";
    cin >> z;

    float a = count_a(x, y);
    cout << a << "\n";

    return 0;
}