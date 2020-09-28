#include <iostream>
using namespace std;

long long min(long long a, long long b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{

    long long noOfChildren;
    cin >> noOfChildren;

    long long onesCount = 0, twosCount = 0, threesCount = 0;

    long long onesArr[noOfChildren] = {0};
    long long twosArr[noOfChildren] = {0};
    long long threesArr[noOfChildren] = {0};

    long long noOfTeams = 0;

    for (long long i = 1; i <= noOfChildren; i++)
    {
        long long ele;
        cin >> ele;
        if (ele == 1)
            onesArr[onesCount++] = i;
        else if (ele == 2)
            twosArr[twosCount++] = i;
        else if (ele == 3)
            threesArr[threesCount++] = i;
    }

    noOfTeams = min(min(onesCount, twosCount), threesCount);

    if (noOfTeams > 0)
    {
        cout << noOfTeams << endl;
        for (int i = 0; i < noOfTeams; i++)
            cout << onesArr[i] << " " << twosArr[i] << " " << threesArr[i] << " " << endl;
    }

    else
        cout << noOfTeams << endl;
}