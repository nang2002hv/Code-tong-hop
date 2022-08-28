#include <bits/stdc++.h>
using namespace std;
struct Tui {
	int w, c;
};
main()
{
	int t; cin >> t;
	while(t--) {
		int n, v;
		cin >> n >> v;
		Tui a[n+1];
		for(int i=1; i<=n; i++) cin >> a[i].w;
		for(int i=1; i<=n; i++) cin >> a[i].c;
		int f[n+1][v+1];
		memset(f, 0, sizeof(f));
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=v; j++) {
				if(j < a[i].w) f[i][j] = f[i-1][j];
				else f[i][j] = max(f[i-1][j], f[i-1][j-a[i].w]+a[i].c);
			}
		}
		cout << f[n][v] << endl;
	}
	
}


