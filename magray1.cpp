#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s[1000];
		int len = pow(2,n);
		s[1] ="0";
		s[2] ="1";
		if(n > 1){
			int vt = 2;
			for (int i = 2; i <= n; i++){
				int k = pow(2,i);
				for (int j = 1; j <= vt; j++){
					s[k-j+1] = "1"+s[j];
					s[j]	 = "0" +s[j];
				}
				vt = k;
			}
		}
		for (int i = 1; i <= len; i++) cout << s[i] <<" ";
		cout << endl;
	}
}