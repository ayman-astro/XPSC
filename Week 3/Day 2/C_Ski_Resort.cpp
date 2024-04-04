#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int count = 0;
        int days = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                days++;
            }
            else
            {
                days = 0;
            }
            if (days >= k)
            {
                count += (days - k + 1);
            }
        }
        cout << count nl;
    }

    return 0;
}