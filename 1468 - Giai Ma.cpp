#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;
int t;
string s;

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> s;
        if(s[0] == '0') {cout << "0\n"; continue;}
        int dp[1005] = {};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= s.size(); ++i){
            if(s[i - 1] > '0') dp[i] = dp[i - 1];
            if(s[i - 2] == '1') dp[i] += dp[i - 2];
            else if(s[i - 2] == '2' and s[i - 1] <= '6') dp[i] += dp[i - 2];
        }
        cout << dp[s.size()] << endl;
    }
}