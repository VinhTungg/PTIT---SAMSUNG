#include<bits/stdc++.h>

using namespace std;
int F[1005][1005];

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        memset(F, 0, sizeof(F));
        string s1, s2;
        cin >> s1 >> s2;
        s1 = "0" + s1;
        s2 = "0" + s2;
        for(int i = 1; i < s1.size(); i++){
            for(int j = 1; j < s2.size(); j++){
                if(s1[i] == s2[j]) F[i][j] = F[i - 1][j - 1] + 1;
                else F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }
        cout << F[s1.size() - 1][s2.size() - 1] << endl;
    }
}