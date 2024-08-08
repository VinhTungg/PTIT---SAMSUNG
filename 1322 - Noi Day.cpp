#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int> > PQ;
        for(int i = 0; i < n; i++){
            int x; cin >> x; PQ.push(x);
        }
        long long sum = 0;
        while(1){
            int tmp = 0;
            int num1 = PQ.top();
            sum += num1; tmp += num1;
            PQ.pop(); num1 = PQ.top();
            sum += num1; tmp += num1;
            PQ.pop();
            if(PQ.empty()) break;
            PQ.push(tmp);
        }
        cout << sum << endl;
    }
}