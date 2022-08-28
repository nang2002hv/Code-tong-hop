#include<bits/stdc++.h>

using namespace std;

#define int long long;

int tknp(int a[],int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] < x){
			res = mid;
			l = mid+1;
		} else {
			r = mid-1;
		}
	}
	return res;
}

main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+5];
		for(auto i = 0; i < n; i++) cin >> a[i];
		int dem = 0;
		sort(a, a+n);
		for(auto i = 0; i < n; i++){
			int k = tknp(a,i+1, n-1,m+a[i]);
			if(k > 0) dem += (k-i);
		}
		cout << dem << endl;
	}
}