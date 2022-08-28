#include<bits/stdc++.h>
using namespace std;
int n, a[100];
vector <vector<int> > ans;

void Try(int i, int sum, vector<int> v) {
	if(sum % 2 != 0) {
		ans.push_back(v);
	}
	for(int j=i+1; j<=n; j++) {
		v.push_back(a[j]);
		Try(j, sum+a[j], v);
		v.pop_back();
	}
}

void Solve() {
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1, greater<int>());
	ans.clear();
	vector <int> v;
	v.clear();
	Try(0, 0, v);
	sort(ans.begin(), ans.end());
	for(int i=0; i<ans.size(); i++) {
		for(int j=0; j<ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}

main() {
	int t; cin >> t;
	while(t--) {
		Solve();
	}
}
