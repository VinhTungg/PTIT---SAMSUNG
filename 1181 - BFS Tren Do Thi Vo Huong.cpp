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
int v, e, u;
vector<int> ke[1001];
vector<bool> visited(1001);

void BFS(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    cout << u << ' ';
    while(!q.empty()){
        v = q.front();
        q.pop();
        for(auto &x : ke[v]){
            if(!visited[x]){
                cout << x << ' ';
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        memset(ke, 0, sizeof(ke));
        for(int i = 0; i <= 1001; ++i) visited[i] = false;
        cin >> v >> e >> u;
        for(int i = 1; i <= e; ++i){
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(u);
        cout << endl;
    }
}