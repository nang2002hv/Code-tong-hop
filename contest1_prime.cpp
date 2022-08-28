#include<bits/stdc++.h>

using namespace std;

bool used[10000005];

void sangnguyento(){
	memset(used, true, sizeof(used));
	used[0] = used[1] = false;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(used[i])
			for(int j = i*i; j <= 10000000; j+=i){
				used[j] = false;
			}
	}
}

int main(){
	sangnguyento();
	long long  n ; cin >> n;
	long long dem = 0;
	for(long long j = 2; j <= sqrt(n); j++){
		if(used[j]) dem++;
	}
	cout << dem;
	return 0;
}