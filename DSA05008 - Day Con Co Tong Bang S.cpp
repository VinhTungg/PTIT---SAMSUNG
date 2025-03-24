#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007

using namespace std;
int t = 1;

int main(){
    boost;
    cin >> t;
    while(t--){
        int n, tar_sum; cin >> n >> tar_sum;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        bool dp[400005] = {};
        dp[0] = 1;
        for(int i = 0; i < n; ++i){
            for(int j = tar_sum; j >= v[i]; --j){
                dp[j] |= dp[j - v[i]];
            }
        }
        cout << (dp[tar_sum] ? "YES" : "NO") << endl; 
    }
}