#include<bits/stdc++.h>

using namespace std;
int n;
bool kt(long long a[], int l, int r, int x, int y){
	if ((a[n-r]-a[l])*(n-x-y) < (a[n-y]-a[x])*(n-l-r))
		return true;
	else if ((a[n-r]-a[l])*(n-x-y) == (a[n-y]-a[x])*(n-l-r) && n-x-y > n -l-r)
		return true;
	return false;
}

main(){
	cin >> n;
	long long arr[n], sum = 0, suml[n+1] = {0}, x= 0, y = 0;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
		suml[i+1] = sum;
	}
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (kt(suml,x,y,i,j))
			{
				x = i;
				y = j;
			}
		}
	}
	cout << n -x -y;
}