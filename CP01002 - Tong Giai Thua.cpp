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
ll a[21];
ll tich(int n){
	ll tich = 1;
	for(int i = 1; i <= n; i++){
		tich *= (ll)i;
	}
	return tich;
}

void init(){
	a[0] = 0;
	for(int i = 1; i <= 20; i++){
		a[i] = tich(i) + a[i - 1];
	}
}

void solve(){
	init();
	int n; cin >> n;
	cout << a[n];
}

int main(){
	boost;
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}
