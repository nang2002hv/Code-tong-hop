#include<bits/stdc++.h>

using namespace std;

int n, a[1005];

void sinh(){
	int i = n-1;
	while(a[i] >= a[i+1]){
		--i;
	}
	if(i== 0){
		for (int i = 1; i <= n; i++)
			a[i] = i;
	} else {
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[j],a[i]);
		int l = i+1, r=n;
		while(l < r){
			swap(a[l],a[r]);
			++l; --r;
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sinh();
		for (int i = 1; i <= n; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}