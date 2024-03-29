#include <bits/stdc++.h>
#define nl << "\n"
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = 1e18;
    ll sum = 0;
    bool flag = true;

    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
            flag = false;
        }
        r++;
    }

    if (flag)
    {
        ans = -1;
    }
    cout << ans nl;

    return 0;
}