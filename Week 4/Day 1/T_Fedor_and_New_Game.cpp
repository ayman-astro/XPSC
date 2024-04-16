#include <bits/stdc++.h>
#define nl cout << "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> v;
    for (int i = 0; i < m + 1; i++)
    {
        vector<int> d;
        for (int k = 0; k < n; k++)
        {
            d.push_back((a[i] >> k) & 1);
        }
        v.push_back(d);
    }
    int ans = 0;
    vector<int> fedor = v[m];
    for (int i = 0; i < m; i++)
    {
        vector<int> d = v[i];
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor[k] != d[k])
            {
                count++;
            }
        }
        if (count <= k)
        {
            ans++;
        }
    }
    cout << ans;
    nl;

    return 0;
}