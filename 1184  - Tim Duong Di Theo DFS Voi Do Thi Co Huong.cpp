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
vector<int> ke[1005];
int visited[1005] = {};
int parent[1001];

void DFS(int u){
    visited[u] = 1;
    for(int v : ke[u]){
        if(!visited[v]){
            parent[v] = u;
            DFS(v);
        }
    }
}

void solve(){
	int v, e, s, t;
    cin >> v >> e >> s >> t;
    for(int i = 1; i <= 1001; i++){
        ke[i].clear();
        parent[i] = 0;
    }
    memset(visited, 0, sizeof(visited));
    while(e--){
        int a, b;
        cin >> a >> b;
        ke[a].pb(b);
    }
    DFS(s);
    if(!parent[t]){
        cout << "-1\n";
        return;
    }
    vector<int> ans;
    while(t != s){
        ans.pb(t);
        t = parent[t];
    }
    ans.pb(t);
    reverse(all(ans));
    for(auto &x : ans) cout << x << ' ';
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
