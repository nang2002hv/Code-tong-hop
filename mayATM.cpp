#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		set <int> a, b, c, d;
		for(int i = 1; i<= n; i++){
			int x; cin >> x;
			a.insert(x);
			c.insert(x);
		}
		for(int i = 1;i <= m; i++){
			int x; cin >> x;
			b.insert(x);
			c.insert(x);
		}
		for(auto it : c){
			cout << it << " ";
		}
		cout << endl;
		int max1 = b.size();
		for(auto it : a){
			b.insert(it);
			int max2 = b.size();
			if(max2 == max1) cout << it <<" ";
			else max1 = max2;
		}
		cout << endl;
	}
}