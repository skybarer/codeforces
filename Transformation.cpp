#include <bits/stdc++.h>
using namespace std;

void print(char str[],int a,int b){
	for(int i = a; i <= b; i++)	cout << str[i];
    cout << endl;
}

void replace(char str[], char p[], int a, int b){
	int p_length = b-a+1;
	for(int i = 0; i < p_length; i++) str[a+i] = p[i];
}

void reverse(char str[], int a, int b) {
    int left = a, right = b;
    while(left < right) {
        swap(str[left++], str[right--]);
    }
}

int main() {
    char str[1001], p[1001]; cin >> str;
    int n; cin >> n;
    while(n--) {
    int a, b; char opr[8]; cin >> opr >> a >> b;
        
        switch(opr[2]) {
            case 'i':
                print(str, a, b);
                break;
            case 'p': 
                cin >> p;
                replace(str, p, a, b);
                break;
            case 'v':
                reverse(str, a, b);
                break;
        }
    }
}