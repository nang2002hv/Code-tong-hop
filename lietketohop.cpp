#include<bits/stdc++.h>

using namespace std;

int a[30], n;

void write(int a[], int n)
{
	for (int i = 0; i < n;i++) cout << a[i];
		cout <<" ";
	cout <<endl;
}

void Try(int i){

	for (int j = 0; j < 2; j++) {
		a[i] = j;
		if (i == n-1) {
			write(a,n);
		}
		else
		{
			Try(i+1);
		}
	}
}

main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	cin >> n;
	Try(1);
	return 0;
}