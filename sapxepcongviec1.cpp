#include<bits/stdc++.h>

using namespace std;

struct data{
	int fi, se;
};

bool cmp(data a, data b){
	return a.se < b.se;
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		data a[1005];
		for(int i = 0; i < n; i++){
			cin >> a[i].fi;
		}
		for(int i = 0; i < n; i++){
			cin >> a[i].se;
		}
		sort(a,a+n, cmp);
		int dem = 1, vt = 0;
		for(int i = 0; i < n; i++){
			if(a[i].fi >= a[vt].se){
				dem++;
				vt = i;
			}
		}
		cout << dem << endl;
	}
}