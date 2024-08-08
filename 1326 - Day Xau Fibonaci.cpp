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
ll F[100];

void init(){
    F[1] = 1; F[2] = 1;
    for(int i = 3; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

char dc(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]) return dc(n - 2, k);
    else return dc(n - 1, k - F[n - 2]);
}

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        init();
        cout << dc(n, k) <<endl;
    }
}