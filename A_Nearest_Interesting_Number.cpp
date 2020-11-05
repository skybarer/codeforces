#include <bits/stdc++.h>
using namespace std;

bool func(int a)
{
     int sum=0;
     while(a)
     {
          int rem=a%10;
          sum+=rem;
          a/=10;
     }
     if(sum % 4 == 0) return true;
     else return false;
}

int main() {
    int num;  cin >> num;
    while(!func(num)) {
        num++;
    }
    cout << num << endl;
}