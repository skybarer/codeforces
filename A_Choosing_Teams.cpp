#include <iostream>
using namespace std;

int main()
{

    int noOfParticipants, noOftimes, qualifiedParticipants = 0;
    cin >> noOfParticipants >> noOftimes;

    for (int i = 0; i < noOfParticipants; i++)
    {
        int personParticipatedNum;
        cin >> personParticipatedNum;

        if (5 - personParticipatedNum >= noOftimes)
            qualifiedParticipants++;
    }

    cout << qualifiedParticipants / 3 << endl;
}