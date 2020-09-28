#include <iostream>
using namespace std;

bool isValidPos(int i, int j, int n)
{
    if (i < 0 || j < 0 || i > n - 1 || j > n - 1)
        return 0;

    return 1;
}

void adjacentElements(int arr[][3], int i, int j)
{
    int n = 3;
    // first row
    if (isValidPos(i - 1, j - 1, n))
        cout << i - 1 << j - 1 << " ";
    if (isValidPos(i - 1, j, n))
        cout << i - 1 << j << " ";
    if (isValidPos(i - 1, j + 1, n))
        cout << i - 1 << j + 1 << " ";
    // second row
    if (isValidPos(i, j - 1, n))
        cout << i << j - 1 << " ";
    if (isValidPos(i, j + 1, n))
        cout << i << j + 1 << " ";
    // third row
    if (isValidPos(i + 1, j - 1, n))
        cout << i + 1 << j - 1 << " ";
    if (isValidPos(i + 1, j, n))
        cout << i + 1 << j << " ";
    if (isValidPos(i + 1, j + 1, n))
        cout << i + 1 << j + 1 << " ";
}

int main()
{
    int arr[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << i << j << " "
                 << " = [ ";
            adjacentElements(arr, i, j);
            cout << "]" << endl;
        }
        // cout << endl;
    }
}