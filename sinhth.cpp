#include<bits/stdc++.h>

using namespace std;

int a[100], n, k;

vector <string> v;

void in(){
	string s="";
	for(int i = 1; i <= k; i++){
		s+= to_string(a[i]) + " ";
	}
	v.push_back(s);
}

void Try(int i){
	for(int j = a[i-1]+1; j <= n -k +i; j++){
		a[i] = j;
		if( i == k) in();
		else Try(i+1);
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		string s ="";
		for(int i = 1; i <= k; i++)	a[i] = i;
		for(int i = 1; i <= k; i++){
			int x;
			cin >> x;
			s+= to_string(x);
		}
		Try(1);
		int k = v.size();
		for(int i = 0; i < k; i++){
			if (s == v[i]) cout << v[i-1] << endl;
		}
	}
}