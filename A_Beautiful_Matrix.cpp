#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rows = 5;
    int cols = 5;
    int arr[cols][rows];
    int _rows;
    int _cols;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            int inp;
            cin >> inp;
            arr[i][j] = inp;
            if (arr[i][j] == 1)
            {
                _cols = i;
                _rows = j;
            }
        }
    }

    cout << abs(2 - _cols) + abs(2 - _rows);
}