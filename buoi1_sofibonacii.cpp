#include<bits/stdc++.h>

using namespace std;

using ll = long long ;

ll fibo[105];

void fibonaci(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 100; i++){
		fibo[i] = fibo[i-1]+fibo[i-2];
	}
}

main(){
	fibonaci();
	for(int i = 0; i <= 100; i++){
		cout << fibo[i] << endl;
	}
}