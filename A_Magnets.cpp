#include <iostream>
using namespace std;

int main()
{
    int noOfMagnets, noOfGroupOfMagnets = 1;
    cin >> noOfMagnets;
    int arr[noOfMagnets];

    for (int i = 0; i < noOfMagnets; i++)
    {
        int magnet;
        cin >> magnet;
        arr[i] = magnet;
    }

    for (int j = 0; j < noOfMagnets - 1; j++)
    {
        if (arr[j] != arr[j + 1])
        {
            noOfGroupOfMagnets++;
        }
    }

    cout << noOfGroupOfMagnets;
}