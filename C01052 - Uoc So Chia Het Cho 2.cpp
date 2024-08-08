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
int cp(int n){
	int a = sqrt(n);
	if(a*a==n && n%2==0) return 1;
	else return 0;
}

void solve(){
	int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(!(i & 1)) ++cnt;
            if(!((n / i) & 1)) ++cnt;
        }
    }
    if(cp(n)) cout << cnt - 1 << endl;
    else cout << cnt << endl;
}
int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
