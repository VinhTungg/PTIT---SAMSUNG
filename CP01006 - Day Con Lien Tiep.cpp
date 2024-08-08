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

void solve(){
	int n; cin >> n;
	ll ans = 0, res = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		ans += x;
		if(ans < 0) ans = 0;
		res = max(res, ans);
	}
	cout << res << endl;
}

int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
