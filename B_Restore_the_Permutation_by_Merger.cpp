#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

template <typename ForwardIterator>
ForwardIterator remove_duplicates(ForwardIterator first, ForwardIterator last) {
    auto new_last = first;

    for (auto current = first; current != last; ++current) {
        if (find(first, new_last, *current) == new_last) {
            if (new_last != current) *new_last = *current;
            ++new_last;
        }
    }

    return new_last;
}

void print(vector<int> arr) {
    for (const auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> v;

        for (size_t i = 0; i < 2 * n; i++) {
            int ele;
            cin >> ele;
            v.push_back(ele);
        }

        v.erase(remove_duplicates(v.begin(), v.end()), v.end());

        print(v);
    }
}