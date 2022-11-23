#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    int x;
    cout << "Enter a number of petals in chamoline: ";
    cin >> x;

    if (x == 0)
    {
        cout << "Your chamoline looks sad, find another one" << endl;
        return 1;
    }

    if (x % 2)
    {
        cout << "It's a love!" << endl;
    }
    else
    {
        cout << "Not today honey" << endl;
    }

    return 0;
}