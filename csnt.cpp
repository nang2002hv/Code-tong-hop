#include<iostream>
#include<math.h>

using namespace std;

int snt(int n)
{
	if ( n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i ++)
	{
		if ( n % i == 0) return 0;
	}
	return 1;
}

main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n;
		m = (int ) sqrt(n);
		for (int i = 2; i <= m; i++)
		{
			if ( snt(i) == 1) cout << i*i << " ";
		}
		cout << endl;
	}
}

