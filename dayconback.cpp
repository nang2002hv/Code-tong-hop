#include <bits/stdc++.h>
using namespace std;

bool Sinh(int a[], int n, int k) {
	int i=k-1;
	while(i>=0 && a[i]==n-k+i+1) i--;
	if(i<0) return false;
	a[i]++;
	for(int j=i+1; j<k; j++) a[j]=a[j-1]+1;
	return true;
}

bool Check(int a[], int b[], int k) {
	for(int i=0; i<k-1; i++) {
		if(a[b[i]-1] > a[b[i+1]-1]) return false;
	}
	return true;
}

int main()
{
	int n, k;
	cin >> n >> k;
	int a[100], b[100];
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<k; i++) b[i] = i+1;
	int d=0;
	do {
		if(Check(a, b, k)) {
			d++;
		}
		
	} while(Sinh(b, n, k));
	cout << d;
}
