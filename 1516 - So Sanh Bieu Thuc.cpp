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
int t;
string P, Q;

string solve(string P){
    stack<char> st1, st2;
    vector<char> alpha;
    string ans = "";
    P = '+' + P;
    st2.push('+');
    foru(i, 0, P.sz() - 1){
        if(isalpha(P[i])) alpha.push_back(P[i]);
        else if(P[i] == ')' || P[i] == '('){
            if(P[i] == '(') st2.push(*alpha.rbegin());
            else st2.pop();
        }else{
            if(st2.top() == '+') alpha.push_back(P[i]);
            else alpha.push_back((P[i] == '+') ? '-' : '+');
        }
    }
    foru(i, 1, alpha.sz() - 1) ans += alpha[i];
    return ans;
}

string check(string P, string Q){
    return P == Q ? "YES\n" : "NO\n";
}

int main(){
    cin >> t;
    while(t--){
        cin >> P >> Q;
        P = solve(P);
        Q = solve(Q);
        cout << check(P, Q);
    }
}