#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x != 0 and x != 1)
    {
        cout << "Enter a valid number(0 or 1)" << endl;
        return 1;
    }

    int y;
    y = (rand() % 2);

    int i = x + y;

    if (i == 0 or i == 2)
    {
        cout << "You won!" << endl;
    }
    else
    {
        cout << "Better luck next time" << endl;
    }

    return 0;
}