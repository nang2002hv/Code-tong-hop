#include<bits/stdc++.h>

using namespace std;

int n, a[10000], b[10000], k;

void ketiep(){
	int i=k;
	while(a[i] == n-k+i){
		i--;
	}
	if (i == 0){
		for (int i = 1; i <= k; i++){
			a[i] = i;
		}
	}
	else {
		a[i]++;
		for (int j = i+1; j <= k; j++){
			a[j] = a[j-1]+1;
		}
		
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for (int i = 1; i <= k; i++){
			cin >> a[i];
		}
		ketiep();
		for (int i = 1; i <= k; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}