#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAX 105
string C[1005];

string Nhan(string a, string b) {
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int lena = a.size(), lenb = b.size();
	string c;
	for(int i=0; i<lena+lenb; i++) c += "0";
	for(int iA=0; iA<lena; iA++) {
		int nho = 0, iB;
		for(iB=0; iB<lenb; iB++) {
			int x = (a[iA]-'0')*(b[iB]-'0') + nho + (c[iA+iB]-'0');
			c[iA+iB] = x%10+'0';
			nho = x/10;
		}
		if(nho>0) c[iA+iB] = nho+'0';
	}
	if(c[lena+lenb-1] == '0') c.pop_back();
	reverse(c.begin(), c.end());
	return c;
}

string Cong(string a, string b) {
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	while(a.size() < b.size()) a+="0";
	while(b.size() < a.size()) b+="0";
	string c;
	int n = a.size(), nho = 0;
	for(int i=0; i<n; i++) c+="0";
	for(int i=0; i<n; i++) {
		int x = (a[i]-'0') + (b[i]-'0') + nho;
		c[i] = x%10+'0';
		nho = x/10;
	}
	if(nho>0) c += (nho+'0');
	reverse(c.begin(), c.end());
	return c;
}

void QHD() {
	C[0] = "1"; C[1] = "1";
	for(int i=2; i<=100; i++) {
		for(int j=0; j<i; j++) {
			C[i] = Cong(C[i], Nhan(C[j], C[i-j-1]));
		}
	}
}

void Solve() {
	int n; cin >> n;
	cout << C[n] << endl;
}

main() {
	QHD();
	int t; cin >> t;
	while(t--)
		Solve();
}

