#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    float y = (rand() % 36) + 1;
    cout << y << endl;

    float x = rand();
    cout << x << endl;

    cout << rand() % 3 << endl;

    return 0;
}
