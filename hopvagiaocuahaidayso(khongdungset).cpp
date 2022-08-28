#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+5], b[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		int i = 0, j = 0;
		sort(a, a+ n);
		sort(b, b+ n);
		vector<int> hop, giao;
		while(i < n && j < m){
			if(a[i] < b[j]){
				hop.push_back(a[i]);
				i++;
			} else if(a[i] > b[j]){
				hop.push_back(b[j]);
				j++;
			} else {
				hop.push_back(a[i]);
				giao.push_back(a[i]);
				j++; i++;
			}
		}
		while(i < n) hop.push_back(a[i++]);
		while(j < m) hop.push_back(b[j++]);
		for(auto it : hop) cout << it <<" ";
		cout << endl;
		for(auto it : giao) cout << it <<" ";
		cout << endl;
	}
}