#include<bits/stdc++.h>

using namespace std;
int k; string s, res;

void Try(int i, string cur_str, int cnt){
    if(cnt > k || i >= s.size()) return;
    res = max(res, cur_str);
    char max_char = cur_str[i];
    for(int j = i + 1; j < s.size(); j++) {
        max_char = max(max_char, cur_str[j]);
    }
    if(max_char == cur_str[i]) Try(i + 1, cur_str, cnt);
    else{
        for(int j = i + 1; j < s.size(); j++){
            if(max_char == cur_str[j]){
                string tmp = cur_str;
                swap(tmp[i], tmp[j]);
                Try(i + 1, tmp, cnt + 1);
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> k >> s;
        res = s;
        Try(0, s, 0);
        cout << res << endl;
    }
}