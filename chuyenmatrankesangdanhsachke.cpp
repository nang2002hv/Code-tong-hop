#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int a[1001][1001];
main(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j<= n; j++){
			if(a[i][j] == 1){
				adj[i].push_back(j);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(auto it : adj[i]){
			cout << it << " ";
		}
		cout << endl;
	}
	cout << endl;
}