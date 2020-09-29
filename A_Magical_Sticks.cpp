#include <iostream>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        long num;
        cin >> num;

        if (num % 2 == 0)
            cout << num / 2;
        else
            cout << (num / 2) + 1;

        cout << endl;
    }

    return 0;
}
