#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfLayersLove;
    cin >> numberOfLayersLove;

    string hate = "I hate";
    string thatILoveIt = " that I love";
    string thatIHateIt = " that I hate";
    string it = " it";

    string out;

    for (int i = 1; i <= numberOfLayersLove; i++)
    {
        if (i == 1)
            out += hate;
        if (i % 2 == 0 && (i > 1))
            out += thatILoveIt;
        if ((i % 2 != 0) && (i > 1))
            out += thatIHateIt;
        if (i == numberOfLayersLove)
            out += it;
    }

    cout << out;
}