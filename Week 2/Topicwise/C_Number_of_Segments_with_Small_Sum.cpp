#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long int s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long int sum = 0, ans = 0;

    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > s)
            {
                sum -= a[l];
                l++;
            }
            ans += r - l + 1;
        }
        r++;
    }
    cout << ans nl;

    return 0;
}