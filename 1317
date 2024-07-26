#include <iostream>
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
int n, a[100][100], check;
string s;

void Try(int i, int j){
    if(i == n && j == n){
        cout << s << ' ';
        check = 1;
    }
    if(i + 1 <= n && a[i + 1][j]){
        a[i + 1][j] = 0;
        s += "D";
        Try(i + 1, j);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    if(j + 1 <= n && a[i][j + 1]){
        a[i][j + 1] = 0;
        s += "R";
        Try(i, j + 1);
        a[i][j + 1] = 1;
        s.pop_back();
    }
}

int main(){
    boost
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        check = 0;
		if(a[1][1]) Try(1, 1);
        if(!check) cout << "-1";
        cout << endl;
    }
}