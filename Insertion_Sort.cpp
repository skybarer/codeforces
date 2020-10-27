#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A;

void printArray(vector<int> A, int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i];
        if(i != n - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    cin >> n;
    A.resize(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    printArray(A, n);
    for (int i = 1; i < n; i++) {
        int key = A[i];
        // insert A[i] in sortred sequence
        int j = i - 1;
        while(j >= 0 && A[j] > key) {
            A[j+1] = A[j];
            j--;
            A[j+1] = key;
        }
        printArray(A, n);
    }
}