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
int main(){
    boost
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n), F(n);
        for(auto &num : nums) cin >> num;
        int ans = -1;
        for(int i = 0; i < n; i++){
            F[i] = 1;
            for(int j = 0; j < i; j++){
                if(nums[j] <= nums[i]) F[i] = max(F[i], F[j] + 1);
            }
            ans = max(ans, F[i]);
        }
        cout << n - ans << endl;
    }
}