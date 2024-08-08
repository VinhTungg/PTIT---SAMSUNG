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
	int res = 0;
	vector<int> a(n);
	vector<int> b;
	for(auto &x : a){
		cin >> x;
	}
	for(int i = n - 1; i >= 0; i--){
		if(a[i] > res) b.push_back(a[i]);
		res = max(res, a[i]);
		
	}
	for(int x = b.size() - 1; x >= 0; x--) cout << b[x] << ' ';
	if(a[n - 1] == 0) cout << a[n - 1];
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
