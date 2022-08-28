#include<bits/stdc++.h>

using namespace std;

int n, a[10000], b[10000], k;
set<int> st;

void ketiep(){
	int i=k;
	while(a[i] == n-k+i){
		i--;
	}
	if (i == 0){
		cout << k;
	}
	else {
		a[i]++;
		int dem = 0;
		for (int j = i+1; j <= k; j++){
			a[j] = a[j-1]+1;
		}
		for(int i = 1; i <= k; i++){
			int max = st.size();
			st.insert(a[i]);
			int max1 = st.size();
			if(max1 != max) dem++;
		}
		cout << dem;
	}
}

main(){
	int t; cin >> t;
	while(t--){
		st.clear();
		cin >> n >> k;
		for (int i = 1; i <= k; i++){
			cin >> a[i];
			st.insert(a[i]);
		}
		ketiep();
		cout << endl;
	}
}