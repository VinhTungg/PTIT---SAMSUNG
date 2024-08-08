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
int a[1005], n;
bool used[1005];

void Try(int i){
    for(int j = n; j >= 1; j--){
        if(!used[j]){
            a[i] = j;
            used[j] = true;
            if(i == n){
                for(int u = 1; u <= n; u++){
                    cout << a[u];
                }
                cout << ' ';
            }else Try(i + 1);
            used[j] = false;
        }
    }
}

int main(){
    boost
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
}