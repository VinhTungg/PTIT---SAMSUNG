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
int t, m, n;

int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        int a[n + 5][m + 5] = {};
        int dp[n + 5][m + 5] = {};
        foru(i, 1, n) foru(j, 1, m) cin >> a[i][j];
        foru(i, 1, n) dp[i][1] = dp[i - 1][1] + a[i][1];
        foru(i, 1, m) dp[1][i] = dp[1][i - 1] + a[1][i];
        foru(i, 2, n){
            foru(j, 2, m){
                dp[i][j] = min({dp[i - 1][j - 1] + a[i][j], dp[i][j - 1] + a[i][j], dp[i - 1][j] + a[i][j]});
            }
        }
        cout << dp[n][m] << endl;
    }
}
