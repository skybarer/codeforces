#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    bool firstLast = 1;

    for (int i = 0; i < rows; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {

            if ((firstLast == 1))
            {
                for (int j = 0; j < cols - 1; j++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else if ((firstLast != 1))
            {
                cout << "#";

                for (int j = 0; j < cols - 1; j++)
                {
                    cout << ".";
                }
                cout << endl;
            }

            firstLast = !firstLast;
        }
    }

    // cout << rows << " " << cols;
}