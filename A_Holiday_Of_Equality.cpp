#include <iostream>
using namespace std;

int main()
{

    int noOfCitizens;
    cin >> noOfCitizens;

    int citizensWealthArr[noOfCitizens];
    int maxwealth = 0;
    int wealthRequired = 0;

    for (int i = 0; i < noOfCitizens; i++)
    {
        int citizenWealth;
        cin >> citizenWealth;
        citizensWealthArr[i] = citizenWealth;

        if (citizenWealth > maxwealth)
            maxwealth = citizenWealth;
    }

    for (int i = 0; i < noOfCitizens; i++)
    {
        if (maxwealth > citizensWealthArr[i])
            wealthRequired += (maxwealth - citizensWealthArr[i]);
    }

    cout << wealthRequired;
}