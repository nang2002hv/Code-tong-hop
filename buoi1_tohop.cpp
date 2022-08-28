#include<bits/stdc++.h>

using namespace std;

long long c[100][100];

void  tohop(){
	for(int i = 0; i <= 20; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i) c[i][j] = 1;
			else c[i][j] = c[i-1][j-1]+c[i-1][j];
		}
	}
}

main(){
	tohop();
	cout << c[10][2] << endl;
}