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
        string s, ans;
        cin >> s;
        stack<char> st;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == ']'){
                ans = "";
                while(st.size() && st.top() != '['){
                    ans = st.top() + ans;
                    st.pop();
                }
                st.pop();
                string num = "";
                while(st.size() && isdigit(st.top())){
                    num = st.top() + num;
                    st.pop();
                }
                if(!num.size()) num = "1";
                int so = stoi(num);
                while(so--){
                    for(auto &c : ans) st.push(c);
                }
            }
            else st.push(s[i]);
        }
        ans = "";
        while(st.size()){
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
}