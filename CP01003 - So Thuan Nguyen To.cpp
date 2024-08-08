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

int nt(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0; 
	}
	return n > 1;
}

int check(ll n){
	int tong = 0;
	while(n){
		if(n%10 != 2 && n%10 != 3 && n%10 != 5 && n%10 != 7) return 0;
		tong += (n % 10);
		n /= 10;
	}
	return(nt(tong));
}

void solve(){
	int l, r;
	cin >> l >> r;
	int cnt = 0;
	for(int i = l; i <= r; i++){
		if(check(i) && nt(i)) ++cnt;
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
