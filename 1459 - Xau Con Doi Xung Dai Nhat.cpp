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
int dp[1005][1005];

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        string s; cin >> s;
        int n = s.length(), ans = 1;
        s = "0" + s;
        for(int i = 1; i <= n; i++) dp[i][i] = 1;
        for(int length = 2; length <= n; length++){
            for(int i = 1; i <= n; i++){
                int j = i + length - 1;
                if(length == 2) dp[i][j] = (s[i] == s[j]);
                else{
                    dp[i][j] = (s[i] == s[j] and dp[i + 1][j - 1]);
                }
                if(dp[i][j]) ans = max(ans, length);
            }
        }
        cout << ans << endl;
    }
}