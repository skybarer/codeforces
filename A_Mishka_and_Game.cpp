#include <iostream>
using namespace std;

int main()
{
    int noOfGameRounds;
    cin >> noOfGameRounds;

    int mishkaWins = 0, chrisWins = 0;

    for (int i = 0; i < noOfGameRounds; i++)
    {
        int mishka, chris;
        cin >> mishka >> chris;

        if (mishka < chris)
        {
            chrisWins++;
        }
        else if (chris < mishka)
        {
            mishkaWins++;
        }

        // cout << mishkaWins << " " << chrisWins << endl;
    }

    if (mishkaWins == chrisWins)
        cout << "Friendship is magic!^^" << endl;
    else if (mishkaWins < chrisWins)
        cout << "Chris" << endl;
    else if (chrisWins < mishkaWins)
        cout << "Mishka" << endl;
}