#include<iostream>

using namespace std;

int  kt(int  a, int  b)
{
	while (a*b != 0)
	{
		if (a > b) a = a%b;
		else b = b%a;
	}
	return a+b;
}

main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		int  a,b;
		cin >> a >> b;
		long long d = (long long )a*b;
		int  c = kt(a,b);
		
		cout << d/c << " " << c <<"\n";
	}
}
