#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define endl "\n"

string word;
string text;
ll words_count;

int main() {
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower); 
    while(true) {
        getline(cin, text);
        if(text == "END_OF_TEXT") break;

        string textWord;
        for (int i = 0; i < text.size(); i++) {
            if(text[i] == ' ') {
                transform(textWord.begin(), textWord.end(), textWord.begin(), ::tolower); 
                // cout << textWord << endl;
                if(word == textWord) words_count++;
                textWord = "";
            } else {
                // if(text[i] >= 'A' && text[i] <= 'Z') textWord += (text[i] + 'A');
                // else textWord += text[i];
                 textWord += text[i];
            }
        }
         transform(textWord.begin(), textWord.end(), textWord.begin(), ::tolower); 
        // cout << textWord << endl;
        if(word == textWord) words_count++;
    }

    cout << words_count << endl;
}