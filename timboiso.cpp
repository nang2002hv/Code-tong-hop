#include<bits/stdc++.h>

using namespace std;
/*sinh np, sap xep, in */

int a[20], n;

set<long long > v;

void in(){
	string s ="";
	for (int i = 1; i <= n; i++){
		if(a[i] == 1) s+= to_string(9);
		else s+= to_string(0);
	}
	v.insert(stoll(s));
	
}

void Try(int i){
	int j;
	for (j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}

main(){
	int t; cin >> t;
	n = 11;
	Try(1);
	while(t--){
		int m;
		cin >> m;
		for(auto it : v){
			if(it % m == 0 && it != 0){
				cout << it << endl;
				break;
			}
		}
	}
}