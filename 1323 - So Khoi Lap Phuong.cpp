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
vector<ll> res;

void init(){
    for(ll i = 1e2; i; i--){
        res.pb(i * i * i);
    }
}

string solve(string &s){
    for(ll &u : res){
        string tmp = to_string(u);
        int idx = 0;
        for(char &j : s) if(j == tmp[idx]) ++idx;
        if(idx == tmp.size()) return tmp;
        
    }
    return to_string(-1);
}

int main(){
    boost;
    int t; cin >> t;
    init();
    while(t--){
        string s; cin >> s;
        cout << solve(s) << endl;
    }
}