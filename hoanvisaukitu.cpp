#include<bits/stdc++.h>

using namespace std;

int n, a[15], ok;
bool used[100];
string s;

void in(){
	for (int i = 1; i <= n; i++){
		cout << s[a[i]-1];
	}
	cout << " ";
}

void Try(int i){
	for (int j = 1; j <= n; j++){
		if (!used[j]){
			a[i] = j;
			used[j] = true;
			if (i == n) in();
			else Try(i+1);
			used[j] = false;
		}
	}
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin >> t;
	while(t--){
		memset(used,false,sizeof(used));
		cin >> s;
		n = s.size();
		Try(1);
		cout << endl;
	}
}