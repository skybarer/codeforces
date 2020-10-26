#include<bits/stdc++.h>
using namespace std;
 
int a,b;
int maxi;
 
int main(){
	cin >> a >> b;
	maxi = max(a,b);
	if(6-maxi+1==1) cout << "1/6";
	if(6-maxi+1==2) cout << "1/3";
	if(6-maxi+1==3) cout << "1/2";
	if(6-maxi+1==4) cout << "2/3";
	if(6-maxi+1==5) cout << "5/6";
	if(6-maxi+1==6) cout << "1/1";
	return 0;
}
