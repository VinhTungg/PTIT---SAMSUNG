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
    boost
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int F[n] = {};
    int ans = 0;
    F[0] = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]) F[i] = max(F[i], F[j] + 1);
        }
        ans = max(ans, F[i]);
    }
    cout << ans;
}