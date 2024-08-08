#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t;
string s;

int main(){
    cin >> t;
    while(t--){
        cin >> s;
	    ll ans = 0;
	    ll sum = 0;
	    for (int i = 0; i < s.length(); ++i) {
	        sum = (sum * 10 + (i + 1) * (s[i] - '0'));
	        ans += sum;
	    }
	    cout << ans << "\n";
    }
}