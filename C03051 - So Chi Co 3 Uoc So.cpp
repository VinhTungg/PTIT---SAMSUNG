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

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

void solve(){
	ll l, r;
	cin >> l >> r;
	if(l < 2) l = 2;
	int cnt = 0;
	for(int i = l; i <= sqrt(r); i++){
		if(nt(i)) ++cnt;
	}
	cout << cnt << endl;
}

int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
