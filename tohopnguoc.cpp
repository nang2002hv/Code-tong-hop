#include<bits/stdc++.h>

using namespace std;

int n, k, a[100];

stack <string> st;

void in(){
	string s ="";
	for (int i = 1; i <= k; i++){
		s = s+ to_string(a[i])+" ";
	}
	st.push(s);
}

void Try(int i){
	for (int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if (i == k) in();
		else Try(i+1);
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for (int i = 1; i <= n; i++) a[i] = i;
		Try(1);
		while(!st.empty()){
			cout << st.top() << endl;
			st.pop();
		}
	}
}