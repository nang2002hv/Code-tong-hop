#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		long long qhd[n+5] ={0};
		qhd[0] = 1; qhd[1] = 1;
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= min(i, m); j++){
				qhd[i] += qhd[i-j];
				qhd[i] %= mod;
			}
		}
		cout <<qhd[n] << endl;
	}
} 
