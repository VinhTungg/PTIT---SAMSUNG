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

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        vector<ll> b;
        b.push_back(a[0]);
        for(int i = 0; i < n - 1; ++i){
            ll x = 1ll * a[i] * a[i + 1] / __gcd(a[i], a[i + 1]);
            b.push_back(x);
        }
        b.push_back(a[n - 1]);
        for(auto &x : b) cout << x << ' ';
        cout << endl;
    }
}