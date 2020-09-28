#include <iostream>
using namespace std;

int main()
{
    long long testCases;
    cin >> testCases;

    for (int k = 0; k < testCases; k++)
    {
        long n;
        cin >> n;

        long long arr[n] = {0};
        long long req[n] = {0};
        long long change_1_to_0 = 0, change_0_to_1 = 0;

        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            arr[i] = ele;
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] % 2;
            req[i] = i % 2;
            if (arr[i] != req[i])
            {
                if (arr[i] == 1)
                    change_1_to_0++;
                else
                    change_0_to_1++;
            }
        }

        if (change_0_to_1 == change_1_to_0)
            cout << change_1_to_0 << endl;
        else
            cout << "-1" << endl;
    }
}