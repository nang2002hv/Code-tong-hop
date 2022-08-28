#include<bits/stdc++.h>

using namespace std;

long long a[1000000];
long long b[1000000];

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1; i <= n-1; i++) cin >> b[i];
		b[n] = 0;
		for (int i = 1; i <= n; i++){
			if(a[i] != b[i]){
				cout << i << endl;
				break;
			}
		}
	}
}