#include<bits/stdc++.h>

using namespace  std;;

main(){
	int t; cin >> t;
	while(t--){
		size_t n; cin >> n;
		queue <string> qe;
		qe.push("6");
		qe.push("8");
		vector<string> res;
		while(qe.size()){
			string s = qe.front();
			res.push_back(s);
			qe.pop();
			if(s.size() != n){
				qe.push(s+"6");
				qe.push(s+"8");
			}
		}
		reverse(res.begin(), res.end());
		cout << res.size() << endl;
		for(auto it : res){
			cout << it <<" ";
		}
		cout << endl;
	}
}
