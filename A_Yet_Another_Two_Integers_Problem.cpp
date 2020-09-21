#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int num1, num2, movesReq = 0;
        cin >> num1 >> num2;

        int difference = labs(num2 - num1);
        movesReq = difference / 10;

        if (difference % 10 != 0 && difference != 0)
            movesReq++;

        cout << movesReq << endl;
    }
}