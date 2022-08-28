#include <bits/stdc++.h>
using namespace std;
int prime(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	int i;
        long long n;
        cin >> n;
        if (prime(n) == 1)
            cout << n;
        else
        {
            for (int i = 2; i <= n/2; i++)
            {
            	if (n%i ==0)
            	{
            		long long k = (long long)n /i;
            		if ( prime(k) == 1)
            		{
            			cout << k;
            			exit(0);
					}
				}
			}
        }
        cout << endl;
    }
    return 0;
}
