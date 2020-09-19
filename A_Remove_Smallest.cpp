#include <iostream>
#include <set>
using namespace std;

bool isValid(set<int> arrSet)
{

    if (arrSet.size() == 1 || arrSet.size() == 2)
        return 1;

    return 0;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        // int arr[n] = {0};

        set<int> arrSet;
        for (int j = 0; j < n; j++)
        {
            int ele;
            cin >> ele;
            // arr[i] = ele;
            arrSet.insert(ele);
        }

        if (isValid(arrSet))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}