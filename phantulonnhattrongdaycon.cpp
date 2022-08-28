#include<bits/stdc++.h>

using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n+5];
		multiset<int> arr;
		arr.clear();
		for (int i = 0; i < n; i++)
			cin >> a[i];	 
		for (int i = 0; i < m; i++)
			arr.insert(a[i]);
		cout << *arr.rbegin() << " ";
		for (int i = m; i < n; i++)
		{
			arr.erase(arr.find(a[i-m]));
			arr.insert(a[i]);
			cout << *arr.rbegin() <<" ";
		}
		cout << endl;
	}
}

