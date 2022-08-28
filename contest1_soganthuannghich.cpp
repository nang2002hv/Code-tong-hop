#include<bits/stdc++.h>

using namespace std;

string xuly(string n){
	int a = 1, b = n.size()-2;
	while(a <= b){
		if(n[a] != n[b]) return "NO";
		a++; b--;
	}
	if(2*(n[0] - 48) == (n[n.size()-1] -48) || (n[0]-48) == 2*(n[n.size()-1]))
		return "YES";
	return "NO";
}

int main(){
	string n; cin >> n;
	cout << xuly(n) << endl;
	return 0;
}