#include <iostream>
using namespace std;

int main()
{

    int noOfProblems, noOfMinutes, maxPossibleProb = 0;

    int contestTimeLimit = 240;

    cin >> noOfProblems >> noOfMinutes;

    int timeLeftForProblems = contestTimeLimit - noOfMinutes;

    for (int i = 1; i <= noOfProblems; i++)
    {
        int timePerProblem = 5 * i;
        if (timePerProblem <= timeLeftForProblems)
        {
            timeLeftForProblems -= timePerProblem;
            maxPossibleProb++;
        }
    }

    cout << maxPossibleProb;
}