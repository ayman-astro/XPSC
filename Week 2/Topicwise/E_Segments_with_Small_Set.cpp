#include <bits/stdc++.h>
#define nl << "\n"
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll, ll> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, count = 0;

    while (r < n)
    {
        freq[a[r]]++;
        while (freq.size() > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                freq.erase(a[l]);
            }
            l++;
        }
        if (freq.size() <= k)
        {
            count += r - l + 1;
        }
        r++;
    }

    cout << count nl;

    return 0;
}