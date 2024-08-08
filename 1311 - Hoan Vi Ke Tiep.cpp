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
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &x : a) cin >> x;
		int diem_gay = -1;
		for(int i = n - 2; i >= 0; i--){
			if(a[i] < a[i + 1]){
				diem_gay = i;
				break;
			}
		}
		if(diem_gay == -1){
			for(int i = n - 1; i >= 0; i--){
				cout << a[i] << ' ';
			}
		}else{
			for(int i = n - 1; i > diem_gay; i--){
				if(a[i] > a[diem_gay]) swap(a[i], a[diem_gay]);
			}
			for(int i = 0; i < n; i++){
				cout << a[i] << ' ';
			}
		}
		cout << endl;
	}
}
