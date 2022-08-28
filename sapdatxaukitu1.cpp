#include <bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int a[35];
		memset(a,0,sizeof(a));
		string s; cin >> s;
		int n = s.size();
		for(int i = 0; i < n; i++){
			a[s[i]-97]++;
		}
		
		int max = -1;
		for (int i = 0; i < n; i++){
			if(a[i] > max) max = a[i];
		}
		if(n-max >= max-1) cout << 1 << endl;
		else cout << -1 << endl;
	}
}