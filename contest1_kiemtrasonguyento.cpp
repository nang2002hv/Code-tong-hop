#include<bits/stdc++.h>

using namespace std;

bool used[1000005];

void sangnguyento(){
	memset(used, true,sizeof(used));
	used[0] = used[1] = false;
	for(int i = 2; i <= sqrt(1000000); i++){
		if(used[i])
			for(int j = i*i; j <= 1000000; j += i)
				used[j] = false;

	}
}

int main(){
	sangnguyento();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(used[n]) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}