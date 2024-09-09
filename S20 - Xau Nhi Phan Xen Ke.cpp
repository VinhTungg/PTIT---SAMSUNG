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
int a[1005] = {};
int n;

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        if(i > 1){
            if(a[i - 1] != j) a[i] = j;
            else continue;
        }else a[i] = j;
        if(i == n){
            for(int k = 1; k <= n; ++k) cout << a[k] << ' ';
            cout << endl;
        }else Try(i + 1);
    }
}

int main(){
    boost;
    cin >> n;
    Try(1);
}