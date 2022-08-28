#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
	int n; cin >> n;
	int a[n+5], vt[n+5];
	for(int i=1; i<=n; i++) cin >> a[i], vt[a[i]] = i;
	int max_ = 0;
	for(int i=1; i<=n-1; ) {
		int up = 1;
		while(vt[i]<vt[i+1] && i+1<=n) {
			up++;
			i++;
		}
		i++;
		max_ = max(max_, up);
	}
	cout << n - max_;
}
