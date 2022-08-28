#include<bits/stdc++.h>

using namespace std;

int n, a[25];
string x;
set<string> st;
void in(){
	bool ok = false;
	for (int i = 1; i <= n-4; i++){
		if (a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4] == 0) ok = true;
	}
	if (ok){
		string s="";
		if (x =="X"){
			for (int i = 1; i <= n; i++)
				if (a[i] == 0) s+="X";
				else  s+="O";
		} else {
				for (int i = 1; i <= n; i++)
				if (a[i] == 0) s+="O";
				else s+="X";
		}
		st.insert(s);
	}
}

void Try(int i){
	for (int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n) in();
		else Try(i+1); 
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		st.clear();
		Try(1);
		for (auto it : st){
			cout << it << endl;
		}
	}
}