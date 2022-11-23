#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    float kWhPrice, oldCounterValue, newCounterValue, debtDays, wite;

    kWhPrice = 1.43;
    wite = 7.92;
    debtDays = 2;

    cout << "Enter the old value on your counter: ";
    cin >> oldCounterValue;

    cout << "Enter the new value on your counter: ";
    cin >> newCounterValue;

    float paymentForElecricity = (newCounterValue - oldCounterValue) * kWhPrice + wite * debtDays;
    cout << "Your payment is: " << paymentForElecricity << endl;

    return 0;
}
