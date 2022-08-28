#include<bits/stdc++.h>
using namespace std;
string s1, s2, s3;
int a[105][105][105];
int m, n, p;
void Solve() {
	memset(a, 0, sizeof(a));
	cin >> m >> n >> p;
	cin >> s1 >> s2 >> s3;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			for(int k=1; k<=p; k++) {
				if(s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]) a[i][j][k] = a[i-1][j-1][k-1] + 1;
				else a[i][j][k] = max(a[i-1][j][k], max(a[i][j-1][k], a[i][j][k-1]));
			}
		}
	}
	cout << a[m][n][p] << endl;
}

main() {
	int t; cin >> t;
	while(t--)
		Solve();
}



