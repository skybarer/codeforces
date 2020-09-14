#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool levelsPassed = 1;

    int arrN[n + 1] = {0};

    int p;
    cin >> p;

    int arrP[p];

    for (int i = 0; i < p; i++)
    {
        int pI;
        cin >> pI;
        arrP[i] = pI;
        arrN[pI] = pI;
    }

    int q;
    cin >> q;
    int arrQ[q];

    for (int i = 0; i < q; i++)
    {
        int qI;
        cin >> qI;
        arrQ[i] = qI;
        arrN[qI] = qI;
    }

    sort(arrP, arrP + p);
    sort(arrQ, arrQ + q);

    for (int i = 0; i <= n; i++)
    {
        if (arrN[i] != i)
        {
            levelsPassed = 0;
            break;
        }
    }
    // for (int i = 0; i <= n; ++i)
    //     cout << arrN[i] << " ";

    levelsPassed
        ? cout << "I become the guy."
        : cout << "Oh, my keyboard!";
}