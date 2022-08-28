#include <bits/stdc++.h>
using namespace std;
const long long mod = pow(10,9)+7;
main()
{
	long long f[1005][1005];
	f[0][0] = 1; f[1][0] = 1; f[1][1] = 1;
	for(int i=2; i<=1000; i++) {
		for(int j=0; j<=i; j++) {
			if(j == i || j == 0) f[i][j] = 1;
			else f[i][j] = (f[i-1][j]%mod + f[i-1][j-1]%mod)%mod;
		}
	}
	int t; cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		cout << f[n][k]%mod << endl;
	}
}

