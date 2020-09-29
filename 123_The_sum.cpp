#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    long long f1 = 1;
    long long f2 = 1;

    long long fibnoacciSum = 1;

    for (int i = 0; i < n - 1; i++)
    {
        long long temp = f1 + f2;
        f1 = f2;
        f2 = temp;
        fibnoacciSum += f1;
    }

    cout << fibnoacciSum << endl;
}
