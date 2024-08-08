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
		string s;
		cin >> s;
		int i = s.size() - 1, cnt = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '0') ++cnt;
		}
		if(cnt == s.size()){
			for(int i = 0; i < cnt; i++){
				s[i] = '1';
			}
		}
		else{
			while(i >= 1 && s[i] == '0'){
				s[i] = '1';
				--i;
			}
			s[i] = '0';
		}
		cout << s << endl;
	}
}
