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

int t, n, k;
ll F[100005];

void dp(){
    F[0] = 1;
    F[1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= min(i, k); j++){
            F[i] += F[i - j];
            F[i] %= MOD;
        }
    }
}

int main(){
    boost
    cin >> t;
    while(t--){
        cin >> n >> k;
        dp();
        cout << F[n] << endl;
        memset(F, 0, sizeof(F));
    }
}