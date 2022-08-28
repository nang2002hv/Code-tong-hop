#include<bits/stdc++.h>
using namespace std;
long long a[35];
string s1, s2;

void Mu2() {
	a[0] = 1;
	for(int i=1; i<=30; i++) {
		a[i] = a[i-1]*2;
	}
}

long long Doi(string s) {
	long long sum = 0;
	for(size_t i=0; i<s.size(); i++) {
		sum += (s[i]-'0') * a[s.size()-1-i];
	}
	return sum;
}

void Solve() {
	cin >> s1 >> s2;
	cout << Doi(s1)*Doi(s2) << endl;
}

main() {
	Mu2();
	int t; cin >> t;
	while(t--) {
		Solve();
		//for(int i=0; i<=30; i++) cout << a[i] << endl;
	}
}
