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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = 0;
                for (int k = 0; k < m; k++)
                {
                    val += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, val);
            }
        }
        cout << ans nl;
    }

    return 0;
}