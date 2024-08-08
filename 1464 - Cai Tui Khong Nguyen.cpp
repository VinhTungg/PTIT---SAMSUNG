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
int dp[1005][1005];

int main(){
    boost
    int t; cin >> t;
    while(t--){
        int n, w;
        cin >> n >> w;
        vector<tuple<int, int, float>> v(n);
        for(tuple<int, int, float> &num : v){
            cin >> get<0>(num) >> get<1>(num);
            get<2>(num) = 1.0 * get<0>(num) / get<1>(num);
        }
        sort(all(v), [](auto &a, auto &b){
            return get<2>(a) > get<2>(b);
        });
//      for(tuple<int, int, double> num : v) cout << get<0>(num) << ' ' << get<1>(num) << ' ' << get<2>(num) << endl;
        int TotalValue = 0, i = 0;
        float TotalWeight = 0;
        while(i < v.size()){
            auto tmp = v[i];
            if(TotalValue + get<1>(tmp) <= w){
                TotalValue += get<1>(tmp);
                TotalWeight += get<0>(tmp);
            }
            else{
                TotalWeight += (get<2>(tmp) * 1.0 * (w - TotalValue));
                i = v.size() - 1;
            }
            ++i;
        }
        cout << setprecision(2) << fixed << TotalWeight << endl;
    }
}