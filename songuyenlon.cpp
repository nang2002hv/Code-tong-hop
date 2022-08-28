#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int a[1005][1005];

void Solve() {
	cin >> s1 >> s2;
	int m = s1.size(), n = s2.size();
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			if(s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1] + 1;
			else a[i][j] = max(a[i-1][j], a[i][j-1]);
		}
	}
	cout << a[m][n] << endl;
}

main() {
	int t; cin >> t;
	while(t--)
		Solve();
}



