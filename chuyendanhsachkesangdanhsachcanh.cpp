#include<bits/stdc++.h>

using namespace std;

main(){
	int n; cin >> n;
	vector<string> vt;
	scanf("\n");
	for(int i = 1; i <= n; i++){
		string s1, tmp;
		getline(cin, s1);
		stringstream ss(s1);
		while(ss >> tmp){
			string s ="";
			s += to_string(i);
			s+= " ";
			s+= tmp;
			if(stoi(tmp) > i){
				vt.push_back(s);
			}
		}
	}
	for(auto it : vt){
		cout << it << endl;
	}
}