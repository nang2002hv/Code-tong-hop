#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
	int n; cin >> n;
	int a[n+5], vt[n+5];
	for(int i=1; i<=n; i++) cin >> a[i], vt[a[i]] = i;
	int max_ = 0;
	for(int j=1; j<=n-1; ) {
		int up = 1;
		int i = j;
		while(vt[i]<vt[i+1] && i+1<=n) {
			up++;
			i++;
		}
		j++;
		max_ = max(max_, up);
	}
	cout << max_;
}