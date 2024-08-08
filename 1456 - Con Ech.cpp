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
    ll F[55] = {};
    F[0] = 1;
    for(int i = 1; i <= 50; i++){
        for(int j = 1; j <= min(i, 3); ++j){
            F[i] += F[i - j];
        }
    }
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}