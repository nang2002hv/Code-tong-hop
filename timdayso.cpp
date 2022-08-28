#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, div;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (div= a[0];div>=1;div--){
		int done = 1;
		for (int j = 0; j < n; j++) {
			int nguyen = a[j] / div;
			int du = a[j] % div;
			if (du >= nguyen) {
				done = 0;
				break;
			}
		}
		if (done == 1) break;
	}
	long long sum = 0,x;
	for(int j=0;j<n;j++){
    int x=(int) (a[j]/(div+1));
    sum+=(x+1);
  }
  cout<<sum<<endl;
	return 0;
}
