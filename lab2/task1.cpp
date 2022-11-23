#include <iostream>
using namespace std;

float abs_sub(float x, float y) {
    float x_abs = abs(x);
    float y_abs = abs(y);
    return x_abs - y_abs;
}

float abs_mult(float x, int y)
{
    float x_abs = abs(x);
    float y_abs = abs(y);
    float abs_mult = x_abs * y_abs;
    return 1 + abs_mult;
}

int main()
{
    float x, y;
    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << abs_sub(x, y) / abs_mult(x, y) << "\n";

    return 0;
}
