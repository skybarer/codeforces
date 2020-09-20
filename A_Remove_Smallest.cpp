#include <iostream>
#include <algorithm>
using namespace std;

bool isValid(int arr[], int n)
{

    int counter = 0;

    if (n == 1)
        return true;

    else
    {
        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] <= 1)
            {
                arr[i] = -1;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << "\n";

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
                counter++;
        }
    }

    return counter == 1;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int arr[n] = {0};

        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            arr[j] = ele;
        }

        if (isValid(arr, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}