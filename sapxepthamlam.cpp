#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], b[n+5];
		bool ok = true;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b+1, b+n+1);
		for(int i = 1; i <= n; i++){
			if( a[i] != b[n-i+1] && a[i] != b[i]){
				ok = false;
				break;
			}
		}
		if(ok) cout <<"Yes" << endl;
		else cout << "No" << endl;
	}
}