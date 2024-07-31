#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, Y, Z;
        cin >> N >> X >> Y >> Z;

        vector<int> dp(N + 1, INT_MAX);
        dp[0] = 0;
        dp[1] = X;

        for (int i = 2; i <= N; ++i) {
            dp[i] = min(dp[i], dp[i - 1] + X); // Insert
            dp[i] = min(dp[i], dp[i + 1] + Y); // Delete (backwards)

            if (i % 2 == 0) {
                dp[i] = min(dp[i], dp[i / 2] + Z); // Copy-paste
            } else {
                dp[i] = min(dp[i], dp[(i + 1) / 2] + Z + X); // Copy-paste then delete
            }
        }

        cout << dp[N] << endl;
    }

    return 0;
}
