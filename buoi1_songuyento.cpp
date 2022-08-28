#include<bits/stdc++.h> 

using namespace std;
// do phuc tap log(n)
bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return n > 1;
}

main(){
	int n; cin >> n;
	if(nt(n)) cout << 1 << endl;
	else cout << 0 << endl;
}