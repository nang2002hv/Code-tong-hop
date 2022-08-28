#include<bits/stdc++.h>

using namespace std;

bool a[1005];

void DFS(int i, vector<int> vt[1005]){
	cout << i <<" ";
	a[i] = true;
	for(auto it : vt[i]){
		if(!a[it]){
			DFS(it,vt);
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		vector<int> vt[1005];
		for(int i = 0; i < 1005; i++) a[i] = false;
		int n, m, u; cin >> n >> m >> u;
		for(int i = 1; i <= m; i++){
			int a, b; cin >> a >> b;
			vt[a].push_back(b);
			vt[b].push_back(a);
		}
		DFS(u,vt); cout << endl;
	}
}
