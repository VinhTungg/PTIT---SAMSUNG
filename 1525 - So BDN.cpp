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
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> p;
        string s = "1";
        p.push(s);
        while(stoll(p.front()) % n != 0){
            p.push(p.front() + "0");
            p.push(p.front() + "1");
            p.pop();
        }
        cout << p.front() << endl;
    }
}