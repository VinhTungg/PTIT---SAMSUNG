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
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		int tmp = i;
		while(tmp % 2 == 0){
			tmp /= 2;
			cnt++;
		}
	}
	if(cnt >= k) puts("Yes");
	else puts("No");
}

int main(){
	boost;
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}
