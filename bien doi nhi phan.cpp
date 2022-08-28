#include<bits/stdc++.h>

using namespace std;

string c5 (string a)
{
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '6')  a[i] = '5';
    }
    return a;
}

string c6 (string a)
{
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '5')  a[i] = '6';
    }
    return a;
}

string cong(string a, string b)
{
    string res = "";
    while (a.length() > b.length())
        b = "0" + b;
    while (a.length() < b.length())
        a = "0" + a;
    int c = 0;
    for (int i = a.length() - 1; i >=0; i--)
    {
        int tmp = a[i] - 48 + b[i] - 48 + c;
        c = tmp / 10;
        tmp = tmp % 10;
        res = (char)(tmp + 48) + res;
    }
    if ( c > 0) res = "1" + res;
    return res;
}

void sum(string s1, string s2)
{
    cout << cong(c5(s1),c5(s2)) <<" "<< cong(c6(s1),c6(s2)) << endl;
}

main()
{
    freopen("nang1.txt","r",stdin);
    freopen("nang2.txt","w",stdout);
	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		sum(s1, s2);
	}
}
