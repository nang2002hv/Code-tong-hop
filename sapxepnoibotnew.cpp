#include<bits/stdc++.h>

using namespace std;

void sxnb(int a[], int n){
	for(int i = 0; i < n-1; i++){
		int index = i;
		for(int j = i+1; j < n; j++){
			if ( a[index] > a[j]){
				index = j;
			}
		}
		swap(a[i],a[index]);
	}
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sxnb(a, n);
		for(int i = 0; i < n; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}