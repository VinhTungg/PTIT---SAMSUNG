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
	boost;
	int t = 1;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(k);
		for(auto &x : a) cin >> x;
		if(a[k - 1] == k){
			for(int i = 0; i < k; i++){
				cout << n - k + 1 + i << ' ';
			}
		}else{
			int i = k - 1;
			while(i >= 0 && a[i] - a[i - 1] == 1){
				--i;
			}
			a[i]--;
			for(int j = i + 1; j < k; j++){
				if(a[j] != n - k + j + 1) a[j]++;
			}
			for(int i = 0; i < k; i++){
				cout << a[i] <<' ';
			}
		}
		cout << endl;
	}
}
