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
    boost
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> record;
        int CountAns = 0;
        for(auto &c : s){
            if(c == '(') record.push(c);
            else{
                if(!record.empty()) record.pop();
                else{
                    ++CountAns;
                    record.push('(');
                }
            }
        }
        cout << CountAns + record.size() / 2 << endl;
    }
}