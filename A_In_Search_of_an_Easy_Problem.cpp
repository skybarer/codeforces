#include <iostream>
using namespace std;

int main()
{
    int noOfPeople;
    bool problemStatus = 0;
    cin >> noOfPeople;

    for (int i = 0; i < noOfPeople; i++)
    {
        int person;
        cin >> person;

        if (person == 1)
        {
            problemStatus = 1;
            break;
        }
    }
    problemStatus ? cout << "HARD" : cout << "EASY";
}