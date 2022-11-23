#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    float n, price, profit_percent, taxes;
    profit_percent = 15;
    taxes = 20 + 28 + 5;

    cout << "Enter amount of product: ";
    cin >> n;

    cout << "Enter a price: ";
    cin >>  price;

    float pure_profit = n * price * (1 + profit_percent/100);
    float profit = pure_profit - n * price;
    float profit_with_taxes = (profit*profit)/(profit*(1-taxes/100));

    cout << "Your profit before taxes is: " << profit_with_taxes << endl;
    cout << "Your profit after taxes is: " << profit << endl;

    return 0;
}
