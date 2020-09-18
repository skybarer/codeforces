#include <iostream>
using namespace std;

int main()
{
    int shovelCost, changeLeft, minShovelsToBuy = 0;
    cin >> shovelCost >> changeLeft;

    for (int i = 1; i < 1000; i++)
    {
        int showelCheck = (i * shovelCost) % 10;
        if (showelCheck == 0 || showelCheck == changeLeft)
        {
            minShovelsToBuy = i;
            break;
        }
    }

    cout << minShovelsToBuy;
}