#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long res = 0;
		for(int i = 2; i <= sqrt(n);i++){
			if(n% i == 0){
				res = i;
				while(n % i == 0)
					n/= i;
			}
		}
		if(n > 1) res = n;
		cout << res << endl;
	}
}