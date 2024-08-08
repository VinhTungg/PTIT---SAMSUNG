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
int dp[105][25005];

int main(){
    boost
    memset(dp, 0, sizeof(dp));
    int TotalWeight, CowNums, ans = 0;
    cin >> TotalWeight >> CowNums;
    vector<int> Cows(CowNums);
    for(int Cow = 1; Cow <= CowNums; Cow++) cin >> Cows[Cow];
    for(int i = 1; i <= CowNums; ++i){
        for(int j = 1 ; j <= TotalWeight; ++j){
            if(j >= Cows[i]){
                dp[i][j] = max(Cows[i] + dp[i - 1][j - Cows[i]], dp[i - 1][j]);
            }else dp[i][j] = dp[i - 1][j];
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
}