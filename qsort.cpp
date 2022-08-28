#include<bits/stdc++.h>

using namespace std;

int kt(int a[], int l, int r){
	int point = a[r];
	int i = l -1;
	for (int j = l; j < r; j++){
		if (a[j] <= point){
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}

void Qsort(int a[], int l, int r){
	if (l > r) return ;
	int p = kt(a, l ,r);
	Qsort(a,l,p-1);
	Qsort(a,p+1,r);
}

main(){
	int n; cin >> n;
	int a[n+5];
	for (int i = 0; i < n; i++) cin >> a[i];
	Qsort(a,0,n-1);
	for (int i = 0; i < n; i++) cout << a[i] <<" ";
}