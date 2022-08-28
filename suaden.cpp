#include<bits/stdc++.h>
using namespace std;

main()
{
	int n, k , b;
	cin >> n >> k >> b;
	int a[n+5];
	for (int i = 1; i <= n; i++) a[i] = 1;
	while(b--)
	{
		int i;
		cin >> i;
		a[i] = 0;
	}
	int min = 0;
	for (int i = 1; i <= k; i++)
	{
		if (a[i] == 0 ) min++;
	}
	int h = min;
	for (int i = 2; i <= n; i++)
	{
		if (i + k -1 > n) break;
		if (a[i+k-1] == 0) h++;
		if (a[i-1] == 0) h--;
		if (h <= min) min = h;
	}
	cout << min;
	
}
