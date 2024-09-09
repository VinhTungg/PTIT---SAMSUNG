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
    string s;
    cin >> s;
    int i = 0; 
    while(i < s.length()){
        if(s[i] < s[i + 1]){
            s.erase(i, 1);
            if(i > 0) --i;
        }else ++i;
    }
    cout << s;
}