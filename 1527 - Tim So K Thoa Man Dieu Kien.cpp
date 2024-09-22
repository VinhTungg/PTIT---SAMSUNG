#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define endl '\n'

using namespace std;

int GenByQueue(int l, int r){
    queue<int> q;
    for(int i = 1; i < 6; ++i) q.push(i);
    int cnt = 0;
    while(!q.empty()){
        int num = q.front(); q.pop();
        if(num >= l && num <= r) ++cnt;
        if(num > r) return cnt;
        for(int i = 0; i < 6; ++i){
            int temp = num; bool check = 0;
            while(temp > 0){
                if(temp % 10 == i) check = 1;
                temp /= 10;
            }
            if(!check) q.push(num * 10 + i);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << GenByQueue(l, r) << endl;
    }
}