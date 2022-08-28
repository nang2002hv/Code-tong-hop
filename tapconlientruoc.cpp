#include <bits/stdc++.h>
using namespace std;
int a[100], n, k;
int OK;
void Sinh() {
	int i = k;
	while(a[i]-a[i-1] == 1) i--;
	if(i == 0) OK = 1;
	else {
		a[i]--;
		for(int j=i+1; j<=k; j++) a[j] = n-k+j;
	}	
}

main()
{
	int t; cin >> t;	
	while(t--) {
		cin >> n >> k;
		for(int i=1; i<=k; i++) cin >> a[i];
		OK = 0;
		Sinh();
		if(!OK) {
			for(int i=1; i<=k; i++) cout << a[i] << " ";
			cout << endl;
		}
		else {
			for(int i=1; i<=k; i++) cout << n-k+i << " ";
			cout << endl;
		}
	}
}

