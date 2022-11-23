#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Heads or tails game" << endl;

    srand(time(0));

    int y;
    y = (rand() % 2);

    if (y)
    {
        cout << "Tails!" << endl;
    }
    else
    {
        cout << "Heads!" << endl;
    }

    return 0;
}
