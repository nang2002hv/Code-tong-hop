#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int f[m+5], a[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		memset(f, 0, sizeof(f));
		for(int i = 0; i < n; i++){
			f[a[i]] = 1;
			for(int j = m; j >= a[i]; j--){
				if(f[j-a[i]] == 1){
					f[j] = 1;
				}
			}
		}
		if(f[m]) cout << "YES" << endl;
		else cout <<"NO" << endl;
	}
} 
