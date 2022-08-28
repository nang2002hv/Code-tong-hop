#include<bits/stdc++.h>

using namespace std;

main ()
{
	string s="hoc sinh nguyen trac nang len bang";	
	stringstream ss(s);
	string tmp;
	int i = 0;
	vector <string> arr;
	arr.resize(1000);
	while (ss >> tmp)
	{
		i++;
		arr[i] = tmp;
	}
	for (int j = 1; j <= i; j++)
	cout << arr[j] << " ";
}

