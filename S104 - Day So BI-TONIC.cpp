#include<bits/stdc++.h>

using namespace std;
int F[101] = {}, G[101] = {};

int main(){
    int t = 1; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &num : a) cin >> num;
        int ans = 0;
        for(int i = 0; i < n; i++){
            F[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]){
                    F[i] = max(F[i], F[j] + a[i]);
                }
            }
        }
        for(int i = n - 1; i >= 0; i--){
            G[i] = a[i];
            for(int k = n - 1; k > i; k--){
                if(a[k] < a[i]){
                    G[i] = max(G[i], G[k] + a[i]);
                }
            }
            ans = max(ans, F[i] + G[i] - a[i]);
        }
        cout << ans << endl;
    }
}