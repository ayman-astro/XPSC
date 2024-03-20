#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int count1 = 0, count2 = 0;
    long long int ans = 0;
    int l = 0, r = 0;
    while (l < n and r < m)
    {
        count1 = 0, count2 = 0;
        int cur = a[l];
        while (cur == a[l] and l < n)
        {
            count1++;
            l++;
        }
        while (b[r] < cur and r < m)
        {
            r++;
        }
        while (cur == b[r] and r < m)
        {
            count2++;
            r++;
        }
        ans += (1ll * count1 * count2);
    }
    cout << ans << "\n";
    return 0;
}