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
int n, a[200];
string s;

void Try(int i, int idx){
    for(int j = idx; j <= n; j++){
        a[i] = j;
        for(int k = 1; k <= i; k++){
            cout << s[a[k] - 1];
        }
        cout << " ";
        if(i < n) Try(i + 1, j + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        Try(1, 1);
        cout << endl;
    }
}