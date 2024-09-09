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
    string s;
    while(t--){
        cin >> s;
        stack<int> st;
        vector<char> ans;
        int res = 0;
        for(auto &c : s){
            if(ans.size() && isdigit(c)){
                for(int i = 0; i < ans.size() - 1; ++i){
                    
                }
            }
            if(isdigit(c)) st.push(c - '0');
            else ans.pb(c);
        }
    }
}