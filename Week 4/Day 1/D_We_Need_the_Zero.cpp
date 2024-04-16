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
        int x = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] ^= x;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= a[i];
        }
        if (ans == 0)
        {
            cout << x;
        }
        else
        {
            cout << -1;
        }
        nl;
    }

    return 0;
}