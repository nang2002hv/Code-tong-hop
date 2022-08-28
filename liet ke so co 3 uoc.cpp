#include<bits/stdc++.h>

using namespace std;

int snt(long long n)
{
	if (n < 2) return 0;
	for ( long long i = 2; i <= sqrt(n); i++)
	{
		if ( n % i == 0)  return 0;
	}
	return 1;
}

main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, m, dem = 0,a;
		cin >> m >> n;
		if (m > n)
		{
			long long k = n;
			n = m;
			m = k;
		}
		a = sqrt(m);
		if (a * a != m) a = a + 1;
		for (long long i = a; i <= sqrt(n); i++)
		{
			if (snt(i) == 1)  dem++;
		}
		cout << dem << endl;
	}
}

