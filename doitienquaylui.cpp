#include<bits/stdc++.h>

using namespace std;

int a[100], b[100], ok, n, x;

void sinh(){
	int i = x;
	while(i > 0 && b[i] == n-x+i) i--;
	if ( i == 0) ok = 0;
	else{
		b[i]++;
		for (int j = i+1; j <= x; j++)
			b[j] = b[j-1]+1;
	}
}

int main(){
	int k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++){
		ok = 1;
		for (int j = 1; j <= i; j++){
			b[j] = j;
		}
		while(ok){
			int res = 0;
			for (int j = 1; j <= i; j++){
				res += a[b[j]];
			}
			if (res == k){
				cout << i << endl;
				return 0;
			}
			x = i;
			sinh();
		}
	}
	cout <<"-1" << endl;
}