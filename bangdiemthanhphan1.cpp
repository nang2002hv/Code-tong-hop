#include<bits/stdc++.h>

using namespace std;

int a[20], n;

void in(){
	for (int i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}

void Try(int i){
	for (int j = 0;  j <= 1; j++){
		a[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}

main(){
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	cin >> n;
	Try(1);
}
