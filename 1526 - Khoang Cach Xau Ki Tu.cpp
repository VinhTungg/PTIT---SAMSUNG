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
vector<string> v;
int cnt = 0;

bool compare(string a, string b){
    int cnt = 0;
    for(int i = 0; i < a.size(); ++i) if(a[i] != b[i]) ++cnt;
    return cnt == 1;
}

int BFS(string s, string t, vector<string>& v){
    unordered_map<string, int> cnt;
    cnt[s] = 0;
    queue<string> q;
    q.push(s);
    while(!q.empty()){
        string tmp = q.front(); q.pop();
        for(auto &c : v){
            if(cnt.find(c) == cnt.end() && compare(tmp, c)){
                cnt[c] = cnt[tmp] + 1;
                q.push(c);
                if(c == t) return cnt[t] + 1;
            }
        }
    }
    return -1;
}

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int n;
        string s, t;
        cin >> n >> s >> t;
        vector<string> v(n);
        for(auto &c : v) cin >> c;
        int result = BFS(s, t, v);
        cout << result << endl;
    }
}