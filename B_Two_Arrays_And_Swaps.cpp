#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        int maxPossibleSum = 0;
        int noOfEleInArr, maxNoOfSwaps;
        cin >> noOfEleInArr >> maxNoOfSwaps;

        int a[noOfEleInArr], b[noOfEleInArr];

        for (int j = 0; j < noOfEleInArr; j++)
        {
            int ele;
            cin >> ele;
            a[j] = ele;
        }

        for (int j = 0; j < noOfEleInArr; j++)
        {
            int ele;
            cin >> ele;
            b[j] = ele;
        }

        sort(a, a + noOfEleInArr);
        sort(b, b + noOfEleInArr, greater<>());

        for (int j = 0; j < noOfEleInArr; j++)
        {
            if (j < maxNoOfSwaps && a[j] < b[j])
            {
                a[j] = b[j];
            }
        }

        for (int j = 0; j < noOfEleInArr; j++)
        {
            maxPossibleSum += a[j];
        }

        cout << maxPossibleSum << endl;
    }
}