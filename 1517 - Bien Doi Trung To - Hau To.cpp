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

int degree(char c)
{
    if(c == '^') return 5;
    if(c == '*' || c == '/') return 4;
    if(c == '+' || c == '-') return 3;
    return 2;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    string s;
    while(t--)
    {
        string res = "";
        cin >> s;
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i])) res += s[i];
            else if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')')
            {
                while(st.size() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
            {
                while(st.size() && degree(st.top()) >= degree(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(st.size())
        {
            if(st.top() != '(') res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
}