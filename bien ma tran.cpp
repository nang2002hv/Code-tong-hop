#include<bits/stdc++.h>

using namespace std;

void dao(char s[])
{
	char s1[500];
	int n = strlen(s), j = 0;
	for (int i = n - 1; i >= 0; i--)
		s1[j++] = s[i];
		s1[n] = '\0';
		strcpy(s,s1);
}

void cong(char a[], char b[])
{
	int n = strlen(a), m = strlen(b);
	dao(a);
	dao(b);
	strcat(a, "0");
	for (int i = 0; i <= n - m; i++)
		strcat(b,"0");
	int nho = 0, t ;
	char tong[500];
	for (int i = 0; i <= n; i++)
	{
		int t = (a[i] - '0') + (b[i] - '0')+ nho;
		nho = t / 10; t = t % 10;
		tong[i] = '0'+t;
	}
	if (tong[n] == '0')  tong[n] = '\0';
	else tong[n+1] = '\0';
	dao(tong); cout << tong << endl;
}

main()
{
	int t;
	cin >> t;
	cin . ignore();
	while (t--)
	{
		char a[500], b[500];
		cin >> a >> b;
		if (strlen(a) > strlen(b)) cong(a,b);
		else cong(b,a);
	}
}
