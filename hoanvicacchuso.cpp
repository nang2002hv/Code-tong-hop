#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, k, used[10], x[10], ans;
vector <string> v;

int C() {
	int max_ = 0, min_ = 1e9;
	for(int i=0; i<v.size(); i++) {
		int t = 0;
		for(int j=0; j<k; j++) {
			t = t*10 + (v[i][x[j]] - '0');
		}
		max_ = max(max_, t);
		min_ = min(min_, t);
	}
	return max_ - min_;
}

void Try(int i) {
	for(int j=0; j<k; j++) {
		if(used[j] == 0) {
			x[i] = j;
			used[j] = 1;
			if(i == k-1) {
				ans = min(ans, C());
			}
			else 
				Try(i+1);
			used[j] = 0;
		}
	}
}

void Solve() {
	cin >> n >> k;
	string s;
	v.clear();
	ans = 1e9;
	for(int i=0; i<n; i++) {
		cin >> s;
		v.push_back(s);
	}
	Try(0);
	cout << ans << endl;
}

main() {
	Solve();
}


