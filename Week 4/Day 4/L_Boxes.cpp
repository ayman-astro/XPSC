#include <bits/stdc++.h>
#define endl "\n"
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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll val = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (val < a[i])
            {
                val = 0;
                ans++;
            }
            val ^= a[i];
        }
        cout << ans << endl;
    }

    return 0;
}