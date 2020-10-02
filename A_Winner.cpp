#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
    int noOfRounds;
    cin >> noOfRounds;

    string names[1000];
    int scores[1000];

    map<string, int> rounds;
    map<string, int> maxQ;

    int maxScore = -1;
    string maxs;

    for (int i = 0; i < noOfRounds; i++) {
        cin >> names[i] >> scores[i];
        rounds[names[i]] += scores[i];
        // if (rounds[names[i]] > maxScore) maxScore = rounds[names[i]];
    }

    for (map<string, int>::iterator it = rounds.begin(); it != rounds.end(); ++it) {
        if (it->second > maxScore) {
            maxScore = it->second;
        }
        it->second = 0;
    }

    // cout << maxScore << endl;

    for (int i = 0; i < noOfRounds; ++i) {
        rounds[names[i]] += scores[i];
        if (rounds[names[i]] >= maxScore && maxQ.find(names[i]) == maxQ.end()) {
            maxQ[names[i]] = i;
        }
    }

    int mini = noOfRounds;
    for (map<string, int>::iterator it = rounds.begin(); it != rounds.end(); ++it) {
        if (it->second == maxScore && maxQ[it->first] < mini) {
            maxs = it->first;
            mini = maxQ[it->first];
        }
    }
    cout << maxs << endl;
}