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
	int n, d; cin >> n >> d;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	for(int i = d; i < n; i++) cout << a[i] << ' ';
	for(int i = 0; i < d; i++) cout << a[i] << ' ';
	cout << endl;
}

int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
