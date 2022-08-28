#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int m; cin >> m;
		vector<long long> vt;
		queue<string> dp;
		dp.push("0");
		dp.push("9");
		while(dp.size()){
			string s = dp.front();
			dp.pop();
			vt.push_back(stoll(s));
			if(s.size() != 9){
				dp.push(s+"0");
				dp.push(s+"9");
			}
		}
		sort(vt.begin(), vt.end());
		for(auto it: vt){
			if(it % m == 0 && it > 0){
				cout << it << endl;
				break; 
			}
		}
	}
}