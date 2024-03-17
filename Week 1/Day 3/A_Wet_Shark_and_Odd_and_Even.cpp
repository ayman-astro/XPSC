#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    long long int ans = 0;
    int min_odd = 1e18;
    int odd_sz = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ans += val;
        if (val % 2 == 1)
        {
            min_odd = min(val, min_odd);
            odd_sz++;
        }
    }
    if (odd_sz % 2 == 1)
    {
        ans -= min_odd;
    }
    cout << ans << "\n";
    return 0;
}