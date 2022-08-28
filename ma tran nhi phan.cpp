#include<bits/stdc++.h>

using namespace std;

main ()
{
	int n, a[1000000][4], dem = 0;
	cin >> n;
	for (int i = 0; i < n; i++ )
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++ )
	{
		int dem1 = 0, dem0 = 0;
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] > 0)  dem1++;
			else dem0++;
		}
		if (dem1 > dem0)  dem++;
	}
	cout << dem ;
	
}
