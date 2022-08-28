#include<bits/stdc++.h>

using namespace std;

int x, y, g;

//ax +by = g;
// o(log(n));
void gcd(int a, int b){
	if ( b == 0) {
		g = a; //ucln
		x = 1;
		y = 0;
		return;
	}
	gcd(b, a%b);
	// tinh nguoc lai;
	int tmp = x;
	x = y;
	y = tmp-a/b*y;
}

int main(){
	int b, m; cin >> b >> m;
	gcd(b,m);
	if(g != 1){
		cout << "khong ton tai nghich dao mo dun!" << endl;
	} else {
		cout << (x%m+m)%m << endl;
	}
}