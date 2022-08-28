#include<bits/stdc++.h>

using namespace std;

main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long k;
		cin >> n >> k;
		long long len = pow(2,n-1);
		while (true )
		{
			if (n == 1)
			{
				cout << "1" << endl;
				break;
			}
			if (n == k)
			{
				cout << n << endl;
				break;
			}
			if (k > len)
			{
				k = len - (k - len);
			}
			n--;
			len/=2;
		 } 
	}
 } 
