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
// Not AC
int main(){
    boost
    int t = 1; cin >> t;
    while(t--){
        int str_len; cin >> str_len;
        string s; cin >> s;
        int F[105][105];
        memset(F, 0, sizeof(F));
        int ans = 0;
        for(int i = 0; i < str_len; i++){
            for(int j = i + 1; j < str_len; j++){
                if(s[i] != s[j]) F[i][j] = F[i][j - 1];
                else F[i][j] = F[i][j - 1] + 1;
                ans = max(ans, F[i][j]);
            }
        }
        cout << ans << endl;
    }
}