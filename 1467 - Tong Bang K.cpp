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

int t, n, k;
int a[1005], dp[1005];

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; ++i) cin >> a[i];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int i = 1; i <= k; ++i){
            for(int j = 1; j <= n; ++j){
                if(i >= a[j]) dp[i] += dp[i - a[j]];
                dp[i] %= MOD;
            }
        }
        cout << dp[k] << endl;
    }
}