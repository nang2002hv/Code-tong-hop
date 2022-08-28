#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9 +7; 
long long power(long long a, long long  b)
{
	if (b == 0 ) return 1;
	long long x = power(a, b/2);
	if ( b % 2 == 0) return (x%mod)*(x%mod) % mod;
	return ((a%mod)*((x%mod)*(x%mod)%mod))%mod;
}

void kt()
{
	long long n; long long m;
	while(true)
	{
		cin >> n >>m;
		if (n == 0 && m ==0) break;
		cout << power(n,m)<< endl;
	}
}
main()
{
	kt();
}
