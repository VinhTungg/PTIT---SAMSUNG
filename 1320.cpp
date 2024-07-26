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
int n, target, a[200], b[30], sum, minarr;
bool check;

void Try(int i, int idx){
    for(int j = idx; j <= n; j++){
        a[i] = b[j];
        sum += b[j];
        if(sum == target){ 
            check = true;
            cout << "[";
            for(int u = 1; u <= i; u++){
                if(u != i) cout << a[u] << ' ';
                else cout << a[u];
            }
            cout << "]";
        }else if(sum + minarr <= target) Try(i + 1, j);
        sum -= b[j];
    }
}

int main(){
    boost
    int t = 1; cin >> t;
    while(t--){
        cin >> n >> target;
        minarr = 1e9;
        for(int i = 1; i <= n; i++){
            cin >> b[i];
            minarr = min(minarr, b[i]);
        }
        sort(b+1, b + n +1);
        sum = 0, check = false;
        Try(1, 1);
        if(!check) cout << "-1";
        cout << endl;
    }
}