#include<bits/stdc++.h>

using namespace std;

int ham1(int a[], int n, int x){ // tim phan tu dau tien ben trai bang mid
	int l = 0, r = n-1;
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			res = mid;
			r = mid-1;
		}
		else if(a[mid] < x) l = mid+1;
		else r = mid-1;
	}
	return res;
}

int ham2(int a[], int n, int x){ // tim phan tu cuoi cung bang x
	int l = 0, r = n-1;
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			res = mid;
			l = mid+1;
		}
		else if(a[mid] < x) l = mid+1;
		else r = mid-1;
	}
	return res;
}

int ham3(int a[], int n, int x){ // tim phan tu dau tien lon hon bang x
	int l = 0, r = n-1;
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] >= x){
			res = mid;
			r = mid-1;
		}
		else l = mid + 1;
	}
	return res;
}


int ham4(int a[], int n, int x){ // tim phan tu dau tien lon hon  x;
	int l = 0, r = n-1;
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] > x){
			res = mid;
			r = mid-1;
		}
		else l = mid+1;
	}
	return res;
}

int main(){
	int n, m; cin >> n >> m;
	int a[n];
	for(auto &x : a) cin >> x;
	int p1 = ham1(a,n,m);
	cout << p1 << endl;
	int p2 = ham2(a,n,m);
	cout << p2 << endl;
	int p3 = ham3(a,n,m);
	cout << p3 << endl;
	int p4 = ham4(a,n,m);
	cout << p4 << endl;
	if(p2 != -1){
		cout << p2-p1 + 1 << endl;
	}

}