#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> friends;

    for (int i = 1; i < n + 1; i++)
    {
        int arrItem;
        cin >> arrItem;
        friends.insert(pair<int, int>(arrItem, i));
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << friends[i] << " ";
    }
}