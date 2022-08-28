#include <bits/stdc++.h>
using namespace std;
bool check;
string ans_s;
char sign[] = {'+','-'};

bool check_s(string s) {
	int t1 = stoi(s.substr(0,2)), t2 = stoi(s.substr(5,2)), ans = stoi(s.substr(10,2));
	int res;
	if(s[3] == '-') res = t1 - t2;
	else if(s[3] == '+') res = t1 + t2;
	return ans == res;
}

void Try(int i, string s) {
	if(check) return;
	if(i == s.size()) {
		if(check_s(s)) {
			check = true;
			ans_s = s;
		}
		return;
	}
	if(s[i] != '?') {
		if(!check) Try(i+1, s);
		return;
	}
	if(i==0 || i==5 || i==10) {
		for(int j='1'; j<='9'; j++) {
			s[i] = j;
			if(!check) Try(i+1, s);
		}
	}
	else if(i==1 || i==6 || i==11) {
		for(int j='0'; j<='9'; j++) {
			s[i] = j;
			if(!check) Try(i+1, s);
		}
	}
	else if(i==3) {
		for(auto j:sign) {
			s[i] = j;
			if(!check) Try(i+1, s);
		}
	}
	
}

void Solve() {
	ans_s = "";
	string s;
	getline(cin, s);
	check = false;
	Try(0, s);
	if(s[3] == '*' || s[3] == '/'  || ans_s == "") cout << "WRONG PROBLEM!" << endl;
	else cout << ans_s << endl;
}

main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
		Solve();
}

