#include <bits/stdc++.h>
using namespace std;
int a[100005], n, f[100005];

void Solve() {
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i], f[i] = a[i];
	for(int i=0; i<n; i++) {
		f[i] = max(f[i-1], f[i]+f[i-2]);
	}
	cout << f[n-1] << endl;
}

main()
{
	int t; cin >> t;
	while(t--) {
		Solve();
	}
}

