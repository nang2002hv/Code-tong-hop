#include<bits/stdc++.h>

using namespace std;

main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k = 0;
		cin >> n;
		int a[23500], b[155][155];
		for (int i = 1; i <= n * n; i++)
		{
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				k++;
				b[i][j] = a[k]; 
			}
		}
		for (int i = 1; i <= n; i++)
		{
			if(i % 2 != 0)
			{
				for (int j = 1; j <= n; j++)
				{
					cout << b[i][j] << " ";
				}
			}
			else 
			{
				for (int j = n; j >= 1; j--)
				{
					cout << b[i][j] << " ";
				}
				
			}
		}
		cout << endl;
	}
}
