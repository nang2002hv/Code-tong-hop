#include <bits/stdc++.h>

using namespace std;
int n;
set <string> st;

int arr[10000], a[10000] ={-9999999};

void in(int i){
	string s ="";
	for (int j = 1; j <= i; j++ ) s = s + to_string(a[j]) +" ";
	st.insert(s);
}

void Try(int j, int pos){
	for(int i = pos; i <= n; i++){
		if (arr[i] > a[j-1]){
			a[j] = arr[i];
			if (j > 1) in(j);
			Try(j+1, i);
		}
	}
}

main(){
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	Try(1,1);
	for (auto it : st) cout << it << endl;
}