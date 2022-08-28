#include<bits/stdc++.h>

using namespace std;



main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector <int> a[10000];
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			a[x].push_back(y);
		}
		for(int i = 1; i <= n; i++){
			cout << i <<": ";
			for( auto it : a[i]){
				cout << it <<" ";
			}
			cout << endl;
		}
	}
}