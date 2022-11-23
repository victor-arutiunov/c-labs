#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int boatSpeed, streamSpeed, time;

    boatSpeed = 15;
    streamSpeed = (rand() % 10) + 1;
    cout << streamSpeed << endl;

    cout << "Enter the time of boat travel in hours: ";
    cin >> time;

    int range = (boatSpeed + streamSpeed) * time;

    cout << "Boat sailed " << range << "km" << endl;

    return 0;
}
