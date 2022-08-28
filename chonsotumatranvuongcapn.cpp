#include <bits/stdc++.h>
using namespace std;

bool Sinh(int a[], int n) {
	int i, j;
	for(i=n-2; i>=0; i--) if(a[i]<a[i+1]) break;
	if(i<0) return false;
	for(j=n-1; j>i; j--) if(a[j]>a[i]) break;
	swap(a[i], a[j]);
	i++; j=n-1;
	while(i<j) {
		swap(a[i], a[j]);
		i++; j--;
	};
	return true;
}

bool Check(int a[][100], int b[], int n, int k) {
	int s=0;
	for(int i=0; i<n; i++) {
		s += a[i][b[i]-1];
	}
	if(s==k) return true;
	return false;
}

int main()
{
	int n, k;
	cin >> n >> k;
	int a[100][100];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)  cin >> a[i][j];
	}
	int b[n+5];
	for(int i=0; i<n; i++) b[i] = i+1;
	vector<vector<int> > v;
	do {
		if(Check(a,b,n,k)) {
			vector <int> res;
			for(int i=0; i<n; i++) res.push_back(b[i]);
			v.push_back(res);
		} 
	} while(Sinh(b, n));
	cout << v.size() << endl;
	for(int i=0; i<v.size(); i++) {
		for(int j=0; j<v[i].size(); j++) cout << v[i][j] << " ";
		cout << endl;
	}
}
