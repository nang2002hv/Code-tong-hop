#include<bits/stdc++.h>
using namespace std;
int n, a[100], k, x[100];

int KiemTraTangDan() {
	for(int i=1; i<=k-1; i++) {
		if(a[x[i]] > a[x[i+1]]) return 0;
	}
	return 1;
}

void Try(int i) {
	for(int j=x[i-1]+1; j<=n-k+i; j++) {
		x[i] = j;
		if(i == k) {
			if(KiemTraTangDan()) {
				for(int i=1; i<=k; i++) cout << a[x[i]] << " ";
				cout << endl;
			}
		}
		else Try(i+1);
	}
}

void Solve() {
	cin >> n >> k;
	for(int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	Try(1);
}

main() {
	int t; cin >> t;
	while(t--) {
		Solve();
	}
}
