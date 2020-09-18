#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        long long num;
        cin >> num;

        long long minSummands = 0;
        long base = 1;
        string roundNumsStr = "";

        while (num != 0)
        {
            long long roundNum = base * (num % 10);
            if (roundNum != 0)
            {
                roundNumsStr += to_string(roundNum) + " ";
                minSummands++;
            }
            num /= 10;
            base *= 10;
        }

        cout << minSummands << endl;
        cout << roundNumsStr << endl;
    }
}