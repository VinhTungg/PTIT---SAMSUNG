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
vector<int> ke[1001];
bool visited[1001];

void DFS(int u){
    visited[u] = true;
    for(auto &x : ke[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 0; i <= 1000; ++i){ 
            ke[i].clear();
            visited[i] = false;
        }
        int n, m;
        cin >> n >> m;
        int x, y;
        while(m--){
            cin >> x >> y;
            ke[x].pb(y);
            ke[y].pb(x);
        }
        int q;
        cin >> q;
        while(q--){
            int s, t;
            cin >> s >> t;
            memset(visited, false, sizeof(visited));
            DFS(s);
            if(visited[t]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}