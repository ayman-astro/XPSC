#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                int ci, cj;

                ci = i, cj = j;
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    sum += a[ci][cj];
                    ci++;
                    cj++;
                }

                ci = i, cj = j;
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    sum += a[ci][cj];
                    ci++;
                    cj--;
                }

                ci = i, cj = j;
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    sum += a[ci][cj];
                    ci--;
                    cj++;
                }

                ci = i, cj = j;
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    sum += a[ci][cj];
                    ci--;
                    cj--;
                }

                sum -= a[i][j] * 3;
                ans = max(ans, sum);
            }
        }
        cout << ans nl;
    }

    return 0;
}