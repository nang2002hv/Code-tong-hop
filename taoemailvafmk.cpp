#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	if(a.size() != b.size()) return a.size() > b.size();
	return a > b;
}

int main(){
	string s; cin >> s; s+="a";
	string tmp="";
	vector<string> vt;
	for(size_t i = 0; i < s.length(); i++){
		if(isdigit(s[i])){
			tmp += s[i];	
		} else {
			while(tmp[0] == '0' && tmp.size() > 1) tmp.erase(0,1);
			if(tmp != "")  vt.push_back(tmp);
			tmp ="";
		}
	}
	sort(vt.begin(), vt.end(), cmp);
	cout << vt[0];
}