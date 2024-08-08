#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int F[num1 + 5][num2 + 5][num3 + 5];
        memset(F, 0, sizeof(F));
        s1 = "0" + s1;
        s2 = "0" + s2;
        s3 = "0" + s3;
        for(int i = 1; i < s1.size(); i++){
            for(int j = 1; j < s2.size(); j++){
                for(int k = 1; k < s3.size(); k++){
                    if(s1[i] == s2[j] && s2[j] == s3[k]) F[i][j][k] = F[i - 1][j - 1][k - 1] + 1;
                    else F[i][j][k] = max({F[i - 1][j][k], F[i][j - 1][k], F[i][j][k - 1]});
                }
            }
        }
        cout << F[s1.size() - 1][s2.size() - 1][s3.size() - 1] << endl;
    }
}