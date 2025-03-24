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
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        int prev2 = v[0];
        int prev1 = max(v[0], v[1]);
        int curr;
        for (int i = 2; i < n; ++i) {
            curr = max(prev1, prev2 + v[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        cout << prev1 << endl;
    }
}