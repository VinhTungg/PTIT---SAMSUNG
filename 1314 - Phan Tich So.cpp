#include <bits/stdc++.h>
using namespace std;
int X[20], n, t;

void Out(int i){
    cout << "(";
    for(int j = 1; j <= i; j++){
        cout << X[j];
        if(j != i) cout << ' ';
    }
    cout << ") ";
}

void Try(int i,int idx, int sum){
    if(sum > n) return;
    for(int j = idx; j > 0; j--){
        X[i] = j;
        if(sum + X[i] == n){
            Out(i);
        }else if(sum + X[i] <= n) Try(i + 1, j, sum + X[i]);
    }
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        Try(1, n, 0);
        cout << endl;
    }
}