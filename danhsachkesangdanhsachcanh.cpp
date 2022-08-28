#include <bits/stdc++.h>
using namespace std;
 
int n, m;
int a[1001][1001];
vector<pair<int, int>> v;
int main(){
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s, tmp;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp){
			if(i < stoi(tmp)){
				v.push_back({i, stoi(tmp)});
			}
		}
	}
	for(auto it : v){
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}