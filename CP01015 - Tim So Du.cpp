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

int ChiaDu(string mu, int k){
	int mod = 0;
	for(int i = 0; i < mu.size(); i++){
		mod = (mod * 10 + (mu[i] - '0')) % k;
	}
	return mod;
}

int HaiMod5(string mu){
	int hai[] = {1, 2, 4, 3};
	return hai[ChiaDu(mu, 4)];
}

int BaMod5(string mu){
	int ba[] = {1, 3, 4, 2};
	return ba[ChiaDu(mu, 4)];
}

int BonMod5(string mu){
	int bon[] = {1, 4};
	return bon[ChiaDu(mu, 2)];
}

void solve(){
	string mu; cin >> mu;
	int ans = (1 + HaiMod5(mu) + BaMod5(mu) + BonMod5(mu)) % 5;
	cout << ans << endl;
}

int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
