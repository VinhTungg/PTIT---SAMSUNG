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
    boost
    int t; cin >> t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        int n, v;
        cin >> n >> v;
        int a[n + 5], c[n + 5];
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> c[i];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= v; j++){
                if(j >= a[i]){
                    dp[i][j] = max(c[i] + dp[i - 1][j - a[i]], dp[i - 1][j]);
                }else dp[i][j] = dp[i - 1][j];
            }
        } 
        cout << dp[n][v] << endl;
    }
}