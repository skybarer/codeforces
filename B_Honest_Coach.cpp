#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int k = 0; k < testCases; k++)
    {
        int n;
        cin >> n;
        long long arr[n];

        long long minDifference = 10001;

        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr[i] = ele;
        }

        sort(arr, arr + n, greater<long long>());

        for (int i = 0; i < n - 1; i++)
        {
            long long currentMin = arr[i] - arr[i + 1];

            if (currentMin < minDifference)
            {
                minDifference = currentMin;
            }
        }

        cout << minDifference << endl;
    }
}