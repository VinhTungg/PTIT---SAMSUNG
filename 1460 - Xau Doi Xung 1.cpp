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
        memset(dp, 0, sizeof(dp));
        string s;
        cin >> s;
        string s1, s2;
        s1 = s2 = s;
        s1 = "0" + s1;
        reverse(s2.begin(), s2.end());
        s2 = "0" + s2;
        for(int i = 1; i < s1.size(); i++){
            for(int j = 1; j < s2.size(); j++){
                if(s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << s.size() - dp[s1.size() - 1][s2.size() - 1] << endl;
    }
}