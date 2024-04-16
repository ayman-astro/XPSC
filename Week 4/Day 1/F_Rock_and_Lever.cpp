#include <bits/stdc++.h>
#define nl cout << "\n"
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
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[__lg(x)]++;
        }

        long long int count = 0;
        for (auto [x, y] : cnt)
        {
            count += (1ll * y * (y - 1) / 2);
        }
        cout << count;
        nl;
    }

    return 0;
}