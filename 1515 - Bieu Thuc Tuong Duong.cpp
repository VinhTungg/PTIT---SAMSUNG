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
string P;

int main(){
    cin >> t;
    while(t--){
        cin >> P;
        stack<char> st1, st2;
        vector<char> alpha;
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
        foru(i, 1, alpha.sz() - 1) cout << alpha[i];
        cout << endl;
    }
}