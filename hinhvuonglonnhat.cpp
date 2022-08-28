#include <bits/stdc++.h>
using namespace std;
int m, n, a[1005][1005], c[1005][1005];

void Solve() {
	memset(a, 0, sizeof(a));
	cin >> m >> n;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	for(int i=1; i<=m; i++) c[i][0] = a[i][0];
	for(int i=1; i<=n; i++) c[0][i] = a[0][i];
	int kq = 0;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			if(a[i][j] == 1) c[i][j] = min(c[i-1][j-1], min(c[i-1][j], c[i][j-1])) + 1;
			else c[i][j] = 0;
			kq = max(kq, c[i][j]);
		}
	}
	cout << kq << endl;
}

main()
{
	int t; cin >> t;
	while(t--) {
		Solve();
	}
	
}


