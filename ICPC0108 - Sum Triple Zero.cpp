#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007

using namespace std;
int t = 1;

int main(){
    boost;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for(auto &x : v){
            cin >> x;
            mp[x]++;
        }
        int cnt = 0;
        for(int i = 0; i < n - 1; ++i){
            for(int j = i + 1; j < n; ++j){
                if(v[i] == v[j]) continue;
                mp[v[i]]--; mp[v[j]]--;
                int tmp = -(v[j] + v[i]);
                if(mp.find(tmp) != mp.end() and tmp != v[j] and tmp != v[i]){
                    if(mp[-(v[j] + v[i])] > 0) ++cnt;
                    cout << v[i] << ' ' << v[j] << endl;
                    cout << -(v[j] + v[i]) << ' ';
                    cout << endl;
                }
                mp[v[i]]++; mp[v[j]]++;
            }
        }
        cout << cnt << endl;
    }
}