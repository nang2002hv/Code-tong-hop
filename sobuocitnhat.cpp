#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        int a[n], l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            l[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] >= a[j] && l[i] <= l[j])
                    l[i] = l[j] + 1;
            }
            s = max(s, l[i]);
        }
        cout << n - s << endl;
    }
}