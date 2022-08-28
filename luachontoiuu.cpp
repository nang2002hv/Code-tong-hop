#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b){
	return a.second < b.second;
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int,int>> a;
		for(int i = 0; i < n; i++){
			pair<int, int> x;
			cin >> x.first >> x.second;
			a.push_back(x);
		}
		sort(a.begin(), a.end(), cmp);
		int dem = 1, vt = 0;
		for(size_t i = 0; i < a.size(); i++){
			if(a[i].first >= a[vt].second){
				dem++;
				vt = i;
			}
		}
		cout << dem << endl;
	}
}