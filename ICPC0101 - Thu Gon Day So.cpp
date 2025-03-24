#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007

using namespace std;
int t = 1;

bool check(int a[], int n){
    for(int i = 1; i < n; ++i){
        if((a[i] + a[i - 1]) % 2 == 0) return false;
    }
    return true;
}

int main(){
    boost;
    //cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; ++i) cin >> a[i];
        while(!check(a, n)){
            for(int i = 0; i < n; ++i){
                if((a[i] + a[i + 1]) % 2 == 0){
                    for(int j = i; j < n - 2; ++j) a[j] = a[j + 2];
                    n -= 2;
                    break;
                }
            }
        }
        cout << n;
    }
}