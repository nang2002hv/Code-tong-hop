#include <bits/stdc++.h>

using namespace std;
/* sinh to hop bang quay lui, tinh tong tu phan tu trong to hop vua sinh neu bang tong thi in ra */

int n , k , p, a[100],dem; 

void in(){
	int s = 0;
	for(int i = 1; i <= k; i++){
		s+= a[i];
	}
	if( s == p){
		dem++;
	}
}

void Try(int i){
	for (int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if( i == k) in();
		else Try(i+1);
	}
}
main(){
	while(true){
		dem = 0;
		cin >> n >> k >> p;
		if(n == k && n == p && p == 0) return 0;
		for(int i = 1; i <= n; i++) a[i] = i;
		Try(1);
		cout << dem << endl;
	}
}