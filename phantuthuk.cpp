#include<bits/stdc++.h> 
using namespace std; 
int main (){ 
	int t; cin>>t; 
	while(t--){ 
		int n, m , k;
		cin >> n >> m >> k;
		vector<int> a;
		for (int i = 1; i <= n+ m; i++ ){
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		cout << a[k-1] << endl;
	}
} 