#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string inp;
    string out;
    int count = 0;
    cin >> n >> inp;

    for (int i = 0; i < n - 1; i++)
    {
        if (inp.at(i) == inp.at(i + 1))
        {
            count++;
        }
    }
    cout << count;
}