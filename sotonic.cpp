#include<bits/stdc++.h>
using namespace std;
#define int long long

void Solve() {
	int n; cin >> n;
	int a[1005], d1[1005], d2[1005];
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		d1[i] = a[i];
		d2[i] = a[i];
	}
	for(int i=1; i<n; i++) {
		for(int j=0; j<i; j++) {
			if(a[j] < a[i]) d1[i] = max(d1[i], d1[j]+a[i]);
		}
	}
	for(int i=n-1; i>=1; i--) {
		for(int j=n; j>i; j--) {
			if(a[j] < a[i]) d2[i] = max(d2[i], d2[j]+a[i]);
		}
	}
	int ans = 0;
	for(int i=1; i<=n; i++) ans = max(ans, d1[i]+d2[i]-a[i]);
	cout << ans << endl;
}

main() {
	int t; cin >> t; 
	while(t--)
		Solve();
}




