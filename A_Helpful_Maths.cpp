#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    vector<char> arr;
    int n = inp.length();

    for (int i = 0; i < n; i = i + 2)
    {
        arr.push_back(inp.at(i));
    }

    // sort the vector
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << "+";
        }
    }
}