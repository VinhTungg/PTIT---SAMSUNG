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

ll solve(ll n, ll k){
    ll res = pow(2, n - 1);
    if(k == res) return n;
    if(k > res) return solve(n - 1, k - res);
    return solve(n - 1, k);
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}