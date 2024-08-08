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
		int i = k - 1;
		if(a[0] == n - k + 1){
			for(int i = 1; i <= k; i++){
				cout << i << " ";
			}
		}else{
			while(i >= 0 && a[i] == n - k + 1 + i){
				--i;
			}
			a[i]++;
			for(int j = i + 1; j < k; j++){
				a[j] = a[j - 1] + 1;
			}
			for(int i = 0; i < k; i++){
				cout << a[i] << ' ';
			}
		}
		cout << endl;
	}
}
