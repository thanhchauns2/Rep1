#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, Min;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        bool ok = false;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i <= k; i++)
        {
            cin >> c[i];
        }
        int j = 1, x = 1;
        for (int i = 1; i <= n; ++i)
        {
            while (b[j] < a[i] && j <= m)
                ++j;
            while (c[x] < a[i] && x <= k)
                ++x;
            if (a[i] == b[j] && b[j] == c[x])
            {
                cout << a[i] << " ";
                ok = true;
            }
        }
        if(!ok)
            cout << "-1";
        cout << endl;
    }
}
