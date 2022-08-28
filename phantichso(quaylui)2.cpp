#include<bits/stdc++.h>

using namespace std;
int n, a[11], dem;
vector<string> v;
void in(int n){
	dem++;
	string s="";
	s+="(";
	for (int i = 1; i < n; i++) s = s+to_string(a[i])+" ";
	s = s+  to_string(a[n]) +") ";
	v.push_back(s);
}

void Try(int i, int k, int sum){
	for (int j = k; j >= 1; j--){
		if (sum + j <= n){
			a[i] = j;
			sum += j;
			if (sum == n) in(i);
			else Try(i+1, j,sum);
			sum -= j;
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		dem = 0;
		cin >> n;
		Try(1, n, 0);
		cout << dem << endl;
		for (auto it : v){
			cout << it;
		}
		cout << endl;
	}
}