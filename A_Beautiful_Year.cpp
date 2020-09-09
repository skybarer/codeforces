#include <iostream>
#include <string>
using namespace std;

bool isUniqueDigitYear(int year)
{
    string yearStr = to_string(year);
    int n = yearStr.length();

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (yearStr[i] == yearStr[j])
            {
                // cout << i << " " << j << "\n";
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int year;
    cin >> year;

    for (int i = year + 1; i <= 9013; i++)
    {
        if (isUniqueDigitYear(i))
        {
            cout << i;
            break;
        }
    }
}