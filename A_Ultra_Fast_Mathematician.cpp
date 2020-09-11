#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
    string rev;
    int n = s.length() - 1;
    for (int i = n; i >= 0; i--)
    {
        rev += s.at(i);
    }
    return rev;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length() - 1;
    string sum;
    char carry = '0';

    for (int i = n; i >= 0; i--)
    {
        char s1c = s1.at(i);
        char s2c = s2.at(i);

        if (s1c == '0' && s2c == '0' && carry == '0')
        {
            sum += '0';
            carry = '0';
        }
        else if (s1c == '0' && s2c == '0' && carry == '1')
        {
            sum += '1';
            carry = '0';
        }

        else if (s1c == '1' && s2c == '0' && carry == '0')
        {
            sum += '1';
            carry = '0';
        }
        else if (s1c == '1' && s2c == '0' && carry == '1')
        {
            sum += '0';
            carry = '1';
        }

        else if (s1c == '0' && s2c == '1' && carry == '0')
        {
            sum += '1';
            carry = '0';
        }

        else if (s1c == '0' && s2c == '1' && carry == '1')
        {
            sum += '0';
            carry = '1';
        }

        else if (s1c == '1' && s2c == '1' && carry == '0')
        {
            sum += '0';
            carry = '1';
        }

        else if (s1c == '1' && s2c == '1' && carry == '1')
        {
            sum += '1';
            carry = '1';
        }

        carry = '0';
    }

    cout << reverse(sum);
}