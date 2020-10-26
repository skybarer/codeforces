#include <bits/stdc++.h>
using namespace std;


bool checkPerfectNumber(int num) {
    int divSum = 0;
    for(int i = 1; i*i < num; i++) {         
        if(num % i == 0) divSum += (i + (num/i));
    }
 return (num == (divSum-num));
}

int num;
int main() {
    cin >> num;
    cout << checkPerfectNumber(num) << endl;
}