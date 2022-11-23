#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    float ang, rad, sec, min;

    cout << "Enter angle value: ";
    cin >> ang;

    rad = ang * 57.295;
    min = ang * 60;
    sec = min * 60;

    cout << "Results: " << endl;
    cout << "rads: " << rad << endl;
    cout << "minutes: " << min << endl;
    cout << "seconds: " << sec << endl;

    return 0;
}
