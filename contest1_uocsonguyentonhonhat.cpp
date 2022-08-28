#include<bits/stdc++.h>

using namespace std;

bool used[100000];

void sangnguyento(){
	memset(used,true,sizeof(used));
	used[0] = used[1] = false;
	for(int i = 2; i <= sqrt(100000); i++){
		if (used[i])
		{
			for(int j = i*i; j <= 100000; j += i)
				used[j] = false;
		}
	}
}

int main(){
	sangnguyento();
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		if(i == 1) cout <<"1"<< endl;
		if(used[i]){
			cout << i << endl;
		} else {
			if(i % 2 == 0) cout << "2" << endl;
			else {
				for(int j = 3; j <= i; j++){
					if(i % j ==0){
						cout << j << endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}