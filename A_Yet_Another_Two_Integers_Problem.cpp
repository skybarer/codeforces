#include <iostream>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int num1, num2, movesReq = 0;
        cin >> num1 >> num2;

        if (num1 < num2)
        {
            while (num1 != num2)
            {
                if (num2 - num1 < 10)
                {
                    movesReq++;
                    break;
                }
                num1 += 10;
                movesReq++;
            }
        }
        else if (num1 > num2)
        {
            while (num1 != num2)
            {
                if (num1 - num2 < 10)
                {
                    movesReq++;
                    break;
                }
                num1 -= 10;
                movesReq++;
            }
        }

        cout << movesReq << endl;
    }
}