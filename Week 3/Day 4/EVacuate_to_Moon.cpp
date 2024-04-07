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
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> power(m), cars(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cars[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> power[i];
        }
        sort(cars.begin(), cars.end(), greater<ll>());
        sort(power.begin(), power.end(), greater<ll>());
        int k = min(n, m);
        ll work = 0;
        for (int i = 0; i < k; i++)
        {
            work += min(cars[i], power[i] * h);
        }
        cout << work nl;
    }

    return 0;
}