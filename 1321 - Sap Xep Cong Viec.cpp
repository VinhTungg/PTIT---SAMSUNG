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

int cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second != b.second ? a.second < b.second : a.first < b.first;
}

void solve(){
	int n; cin >> n;
    pair<int , int> p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i].first;
    }
    for(int i = 0; i < n; ++i){
        cin >> p[i].second;
    }
    sort(p, p + n, cmp);
    int ans = 1, tmp = p[0].second;
    for(int i = 0; i < n - 1; i++){
        if(tmp <= p[i + 1].first){
            ++ans;
            tmp = p[i + 1].second;
        }
    }
    cout << ans << '\n';
}

int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
