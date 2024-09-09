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
ll ans[201][201];

void init(){
    for(int i = 0; i <= 200; ++i){
        ans[i][0] = ans[i][i] = 1;
        for(int j = 1; j < i; ++j){
            ans[i][j] = (ans[i-1][j] + ans[i-1][j-1]) % MOD;
        }
    }
}

int main(){
    boost;
    init();
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        ll res = ans[n + m][n];
        cout << res << endl;
    }
}
