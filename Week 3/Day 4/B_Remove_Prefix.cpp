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
        int n;
        cin >> n;
        map<int, int> freq;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            freq[a[i]]++;
            if (freq[a[i]] > 1)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans nl;
    }

    return 0;
}