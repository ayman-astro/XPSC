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

    ll l = 0, r = 0, count = 0, sum = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            count += n - r;
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << count nl;

    return 0;
}