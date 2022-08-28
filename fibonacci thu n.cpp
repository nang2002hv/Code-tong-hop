#include<bits/stdc++.h>

using namespace std;

void kt(long long n)
{
	long long a = 1, b = 1, c;
	if(n == 1 || n == 2) cout << "1" << endl;
	if (n > 2)
	{
		for (long long i = 3; i <= n; i ++ )
		{
			c = a + b;
			b = a;
			a = c;
		}
		cout << c << endl;
	}
}

main ()
{
	int t; 
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		kt(n);		
	}		
} 
