#include <iostream>
using namespace std;

int main()
{
    long double noOfDrinks, sumOfDrinks = 0;
    cin >> noOfDrinks;

    for (int i = 0; i < noOfDrinks; i++)
    {
        long double drink;
        cin >> drink;

        sumOfDrinks += drink;
    }

    cout.precision(12);

    cout << fixed << (sumOfDrinks / noOfDrinks);
}