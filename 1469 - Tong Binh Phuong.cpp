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
int dp[10005]; 
vector<int> Cp;

bool check(int n){
    int sqr = sqrt(n);
    return sqr * sqr == n;
}

void init(){
    for(int i = 1; i <= 10000; ++i){
        if(check(i)) {
            dp[i] = 1;
            Cp.push_back(i);
        }
        else{
            dp[i] = 1e9;
            for(auto &num : Cp){
                dp[i] = min(dp[i], dp[i - num] + dp[num]);
            }
        }
        //cout << "dp[" << i << "] la: " <<  dp[i] << endl;
    }
}

int main(){
    boost;
    int t; cin >> t;
    init();
    while(t--){
        int n; cin >> n;
        cout << dp[n] << '\n';
    }
}