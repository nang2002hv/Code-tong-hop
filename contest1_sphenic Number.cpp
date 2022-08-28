#include<iostream>

using namespace std;

bool slove(long long n){
	int res  = 0;
	for(int i = 2; i <= sqrt(n); i++){
		int dem = 0;
		if(n%i ==0){
			res++;
			while(n%i == 0){
				dem++;
				if(dem > 1) return false;
				n /= i;
			}
		}
	}
	if(n > 1) res++;
	if(res==3) return true;
	else return false;
}

int main(){
	long long n; cin >> n;
	slove(n) ? cout << 1 << endl : cout << 0 << endl;
	return 0;
}