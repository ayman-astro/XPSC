#include <bits/stdc++.h>
#define nl << "\n"
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        pre[1] = a[1];
        for (int i = 2; i <= n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll ans = k * (r - l + 1);
            ans += pre[n] - (pre[r] - pre[l - 1]);
            if (ans % 2)
            {
                cout << "YES" nl;
            }
            else
            {
                cout << "NO" nl;
            }
        }
    }

    return 0;
}