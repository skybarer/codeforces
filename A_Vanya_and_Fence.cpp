#include <iostream>
using namespace std;
int main()
{

    int noOfFriends, heightOfFence, widthOfRoad = 0;
    cin >> noOfFriends >> heightOfFence;

    for (int i = 0; i < noOfFriends; i++)
    {
        int friendHeight;
        cin >> friendHeight;
        if (friendHeight <= heightOfFence)
        {
            widthOfRoad++;
        }
        else
        {
            widthOfRoad += 2;
        }
    }
    cout << widthOfRoad;
}