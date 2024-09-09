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
vector<bool> visited(1001);
int parent[1001];

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.size()){
        int tmp = q.front();
        q.pop();
        for(auto &x : ke[tmp]){
            if(!visited[x]){
                q.push(x);
                parent[x] = tmp;
                visited[x] = true;
            }
        }
    }
}

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        for(int i = 0; i <= v; ++i){ 
            visited[i] = false;
            parent[i] = 0;
            ke[i].clear();
        }
        for(int i = 1; i <= e; ++i){
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS(s);
        vector<int> ans;
        if(!parent[t]){
            cout << "-1\n";
            continue;
        }
        while(t != s){
            if(!t){
                cout << "-1\n";
                continue;
            } 
            ans.push_back(t);
            t = parent[t];
        }
        ans.pb(t);
        reverse(all(ans));
        for(auto &x : ans) cout << x << ' ';
        cout << endl;
    }
}