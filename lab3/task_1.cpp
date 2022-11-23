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

    int y;
    y = (rand() % 36) + 1;

    if (x == y)
    {
        cout << "You won!" << endl;
    } else
    {
        cout << "Better luck next time" << endl;
    }


    return 0;
}