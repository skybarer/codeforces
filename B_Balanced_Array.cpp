#include <iostream>
using namespace std;

int main()
{
    int noOfTests;
    cin >> noOfTests;

    for (int i = 0; i < noOfTests; i++)
    {
        int lenOfArr;
        cin >> lenOfArr;
        int arr[lenOfArr] = {0};
        int n = (lenOfArr / 2) + 1;

        int eventSum = n * (n + 1);
        int oddSum = n * n;
        int removeDigit = eventSum - oddSum;

        if (removeDigit % 2 != 0)
        {
            cout << "YES"
                 << "\n";

            // even digits
            int even = 1;
            for (int j = 0; j < lenOfArr / 2; j++)
            {
                arr[j] = 2 * even;
                even++;
            }

            // odd digits
            int odd = 0;
            for (int j = lenOfArr / 2; j < lenOfArr; j++)
            {
                if (removeDigit != (2 * odd + 1))
                    arr[j] = 2 * odd + 1;
                else
                    --j;
                odd++;
            }

            // printing the array
            for (int j = 0; j < lenOfArr; j++)
            {
                cout << arr[j] << " ";
            }

            cout << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}