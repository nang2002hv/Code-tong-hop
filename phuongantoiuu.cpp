#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Tui {
	int val, height;
};

bool Sinh(int a[], int n) {
	int i=n-1;
	while(i>=0 && a[i]==1) i--;
	if(i<0) return false;
	a[i]=1;
	for(int j=i+1; j<n; j++) a[j]=0;
	return true;
}

ll Val(Tui a[], int b[], int n) {
	ll sum = 0;
	for(int i=0; i<n; i++) {
		sum+= b[i]*a[i].val;
	}
	return sum;
}

ll Height(Tui a[], int b[], int n) {
	ll sum = 0;
	for(int i=0; i<n; i++) {
		sum+= b[i]*a[i].height;
	}
	return sum;
}

void DanhDau(int b[], int x[], int n) {
	for(int i=0; i<n; i++) x[i]=b[i];
}

int main(){
		int n, w;
		cin >> n >> w;
		Tui a[n]; int x[n], b[n];
		for(int i=0; i<n; i++) {
			b[i] = 0;
			cin >> a[i].val;
		} 
		for(int i=0; i<n; i++) {
			cin >> a[i].height;
		}
		int max = 0;
		do {
			if(Height(a, b, n) <= w) {
				if(Val(a, b, n) > max) {
					DanhDau(b, x, n);
					max = Val(a, b, n);
				}
			}
		} while(Sinh(b ,n));
		cout << max << endl;
		for(int i=0; i<n; i++) cout << x[i] << " ";
		cout << endl;
} 

