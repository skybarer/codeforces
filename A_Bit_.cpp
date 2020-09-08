#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string opr;
        cin >> opr;

        if (opr == "++X") {
            ++x;
        }
        else if (opr == "X++") {
            x++;
        }
        else if (opr == "--X") {
            --x;
        }
        else if (opr == "X--") {
            x--;
        }
    }

    cout << x;

}