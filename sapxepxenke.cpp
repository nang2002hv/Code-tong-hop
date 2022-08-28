#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, i , j ;cin >> n;
		int a[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		for( j = 0,  i = n-1; j < i; i--, j++){
			cout << a[i] <<" " << a[j];
		}
		if( i == j) cout << a[i];
		cout << endl;
	}
}