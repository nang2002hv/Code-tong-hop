#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t; 
	while(t--){
		size_t n; cin >> n;
		queue<string> qe;
		vector<string> res;
		qe.push("1");
		while(qe.size()){
			string s = qe.front();
			res.push_back(s);
			qe.pop();
			qe.push(s+"0");
			qe.push(s+"1");
			if(res.size() == n) break;
		}
		for(auto it : res){
			cout << it <<" ";
		}
		cout << endl;
	}
}