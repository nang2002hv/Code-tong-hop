#include<bits/stdc++.h>

using namespace std;

void Try(int n, char A, char B,char C){
	if( n == 1) cout << A <<" --> " << C << endl;
	else{
	Try(n-1,'A','C','B');
	Try(n-1,'A','B','C');
	Try(n-1,'B','C','A');
	}
}

main(){
	int n; cin >> n;
	Try(n,'A','B','C');
}