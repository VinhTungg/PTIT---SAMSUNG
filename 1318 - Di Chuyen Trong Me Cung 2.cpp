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
int n, a[100][100], check[100][100];
vector<string> v;

void Try(int i, int j, string s = ""){
    if(!a[1][1] or !a[n][n]) return;
    if(i == n && j == n){
        v.push_back(s);
        return;
    }
    if(a[i + 1][j] && i != n && !check[i + 1][j]){
        check[i][j] = 1;
        Try(i + 1, j, s + 'D');
        check[i][j] = 0;
    }
    if(a[i][j - 1] && j != 1 and !check[i][j - 1]){
        check[i][j] = 1;
        Try(i, j - 1, s + 'L');
        check[i][j] = 0;
    }
    if(a[i][j + 1] && j != n and !check[i][j + 1]){
        check[i][j] = 1;
        Try(i, j + 1, s + 'R');
        check[i][j] = 0;
    }
    if(a[i - 1][j] && i != 1 and !check[i - 1][j]){
        check[i][j] = 1;
        Try(i - 1, j, s + 'U');
        check[i][j] = 0;
    }
}

int main(){
    boost
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                check[i][j] = 0;
            }
        }
		Try(1, 1);
        if(v.empty()) cout << "-1";
        else {
            for(string &s : v) cout << s << ' ';
        }
        cout << endl;
    }
}