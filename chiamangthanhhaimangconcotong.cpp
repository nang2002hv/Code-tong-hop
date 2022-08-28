#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n , k; cin >> n >> k;
		int a[55];
		k = min(k, n-k);
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a+1, a+n);
		int sum1 = 0, sum2 = 0;
		for(int i = 1; i <= k ;i++) sum1+= a[i];
		for(int i = k+1; i <= n ;i++) sum2+= a[i];
		int res = min(sum1,sum2);
		if(sum1-res > 0) cout << sum1 - res << endl;
		else cout << sum2 - res << endl;

	}
}