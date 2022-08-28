#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a, b;	cin >> a >> b;
	int n = ceil(sqrt(a)) , m = sqrt(b);
	cout << m-n+1 << endl;
	return 0;
}
