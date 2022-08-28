#include<bits/stdc++.h>

using namespace std;

void kt(long long n)
{
	if ( n == 0)  cout <<"NO" << endl;
	if ( n == 1)  cout <<"YES" << endl;
	if (n >= 2)
	{
		long long a = 1, b = 1, c = 0;
		while ( n != c)
		{
			if ( c > n )
			{
				cout << "NO" << endl;
				break;
			}
			c = a +b ;
			b = a;
			a = c;
			if (c == n) cout << "YES" << endl;
		}
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
