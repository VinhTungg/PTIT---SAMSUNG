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
    while (t--){
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        vector<long long> dp(N + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < N; ++i) {
            vector<long long> new_dp(N + 1, 0);
            for (int j = 0; j <= N; ++j) {
                if (dp[j] > 0) {
                    // Nếu chọn A[i], cập nhật new_dp[j+1]
                    if (j + A[i] <= N) {
                        new_dp[j + A[i]] = (new_dp[j + A[i]] + dp[j]) % MOD;
                    }
                    // Không chọn A[i]
                    new_dp[j] = (new_dp[j] + dp[j]) % MOD;
                }
                cout << new_dp[j] << ' ';
            }
            cout << endl;
            dp = new_dp;
        }

        // Tính tổng tất cả các giá trị trong dp
        long long result = 0;
        for (int i = 1; i <= N; ++i) {
            result = (result + dp[i]) % MOD;
        }
        cout << result << endl;
    }

    return 0;
}
