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

void DFS(int u){
    visited[u] = 1;
    cout << u << ' ';
    for(int v : ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

void solve(){
	int v, e, u;
    cin >> v >> e >> u;
    while(e--){
        int a, b;
        cin >> a >> b;
        ke[a].pb(b);
        ke[b].pb(a);
    }
    DFS(u);
    cout << endl;
    for(int i = 1; i <= v; i++){
        ke[i].clear();
    }
    memset(visited, 0, sizeof(visited));
}
int main(){
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
