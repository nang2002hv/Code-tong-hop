#include<bits/stdc++.h>

using namespace std;
int x = 0;
void Try(int a[],int n, int used[], int used1[], int used2[], int i){
	for (int j = 1; j <= n; j++){
		if (!used[j] && !used1[i-j+n] && !used2[i+j-1]){
			a[i] = j;
			used[j] = 1; used1[i-j+n] = 1; used2[i+j-1] = 1;
			if (i == n) { x++;}
			else 
				Try(a, n, used, used1,used2,i+1);
			used[j] = 0; used1[i-j+n] = 0; used2[i+j-1]=0;
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> t;
		int used[n+1] ={0};
		int used1[2*n] ={0};
		int used2[2*n] ={0};
		x = 0;
		Try(a,n, 0, used,used1,used2);
		cout << x << endl;

	}
}