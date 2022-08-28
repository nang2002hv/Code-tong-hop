#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

string viethoa(string s){
	string t = s;
	for(auto &x : t){
		x = toupper(x);
	}
	return t;
}

int main(){
	string s1,tmp, s2; 
	getline(cin,s1);
	int dem = 0;
	stringstream ss(s1);
	vector<string> vt;
	while(ss >> tmp){
		chuanhoa(tmp);
		vt.push_back(tmp);

	}
	for(int i = 0; i < vt.size()-1; i++){
		cout << vt[i];
		if(i != vt.size()-2){
			cout << " ";
		} else {
			cout <<", ";
		}
	}
	cout << viethoa(vt.back()) << endl;
	cout << viethoa(vt.back()) << ", ";
	for(int i = 0; i < vt.size()-1; i++){
		cout << vt[i] <<" ";
	}

}