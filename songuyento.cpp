#include <bits/stdc++.h>

using namespace std;
vector <int> c={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197};
int b[100], a[100], n, k, p, s, dem;
vector<vector<int>> v;
void in(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum+= b[a[i]];
	}
	if(sum==s){
		dem++;
		vector<int> x;
		for(int i = 1; i <= k; i++){
			x.push_back(b[a[i]]);
		}
		v.push_back(x);
	}
}

void Try(int i){
	for(int j = a[i-1]+1; j <= n- k+i; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}

main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		int i = 0;
		dem = 0;
		cin >> k >> p >> s;
		for(auto it : c){
			if(it > p){
				i++;
				b[i] = it;
			}
		}
		n = i;
		for(int i = 1; i <= n; i++) a[i] = i;
		Try(1);
		cout << dem << endl;
		for(auto it : v){
			for(auto x : it){
				cout << x << " ";
			}
			cout << endl;
		}
	
	}
}