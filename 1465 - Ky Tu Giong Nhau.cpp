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
int dp[105];
int t, n, x, y, z;

int main(){
    boost
    cin >> t;
    while(t--){
        cin >> n >> x >> y >> z;
        dp[1] = x;
        for(int i = 2; i <= n; i++){
            if(i & 1){
                dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
            }else{
                dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
            }
        }
        cout << dp[n] << endl;
    }
}