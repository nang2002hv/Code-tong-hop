#include<bits/stdc++.h> 
using namespace std;

int x[100], k, n;
string s;
set <string> st;

void in(){
	string s1="";
	for(int i = 1; i <= k; i++){
		s1+= s[x[i]-1];
	}
	st.insert(s1);
}

void sinhth(int i){
	for(int j = x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if(i == k) in();
		else sinhth(i+1);
	}
}

main(){
	int t; cin >> t;
	while(t--){
		st.clear();
		int m; cin >> m;
		cin >> s;
		n = s.size();
		for(int i = 1; i <= m; i++){
			k = i;
			sinhth(1);
		}
		for(auto it: st){
			cout << it <<" ";
		}
		cout << endl;
	}
}