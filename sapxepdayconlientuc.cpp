#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		int b[n+5];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b+1, b+n+1);
		int dau = 1, cuoi = n;
		while(a[dau] == b[dau]) dau++; 
		while(a[cuoi] == b[cuoi]) cuoi--;
		cout << dau <<" "<< cuoi << endl; 
	}
}