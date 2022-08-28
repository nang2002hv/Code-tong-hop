#include<bits/stdc++.h>

using namespace std;

main(){
	int x1, y1,x2,y2;
	cin >> x1>> y1>>x2>>y2;
	int a = abs(x1-x2), b = abs(y1-y2);
	if ( a <= b)
		cout << b;
	else cout << a;
}