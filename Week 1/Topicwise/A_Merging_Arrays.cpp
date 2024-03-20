#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> ans(n + m);
    int l = 0, r = 0, cur = 0;
    while (l < n and r < m)
    {
        if (a[l] < b[r])
        {
            ans[cur] = a[l];
            l++;
        }
        else
        {
            ans[cur] = b[r];
            r++;
        }
        cur++;
    }
    while (l < n)
    {
        ans[cur] = a[l];
        l++;
        cur++;
    }
    while (r < m)
    {
        ans[cur] = b[r];
        r++;
        cur++;
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}