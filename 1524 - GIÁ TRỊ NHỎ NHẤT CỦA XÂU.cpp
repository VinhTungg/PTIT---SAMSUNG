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

int main() {
    boost;
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        ll ans = 0;
        int a[26] = {};
        priority_queue<int> pq;
        for(auto &c : s) {
            a[c - 'A']++;
        }
        for(int i = 0; i < 26; ++i) if(a[i]) pq.push(a[i]);
        while(pq.size()){
            if(n){
                int tmp = pq.top();
                pq.pop();
                pq.push(--tmp);
                --n;
            }else{
                ans += (1ll * pq.top() * pq.top());
                pq.pop();
            }
        }
        cout << ans << endl;
    }
}