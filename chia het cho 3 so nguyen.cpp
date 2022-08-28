#include<bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;
    cin.ignore();
    char ds[10000][50];
    for (int i = 1; i <= n; i++)
    {
        cin.getline(ds[i],50);
    }
    int b[10000] = { };
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (strcmp(ds[i],ds[j])== 0 && b[i] == 0)
            {

                b[i]++;
                b[j]++;
            }
        }
    }
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] > 1) dem++;
    }
    cout << dem;

}
