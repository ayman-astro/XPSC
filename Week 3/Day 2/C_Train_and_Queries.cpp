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
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val].push_back(i);
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            bool flag = false;
            if (mp.count(a) and mp.count(b))
            {
                int l = *min_element(mp[a].begin(), mp[a].end());
                int r = *max_element(mp[b].begin(), mp[b].end());
                if (l <= r)
                {
                    flag = true;
                }
            }
            cout << (flag ? "YES" : "NO")nl;
        }
    }

    return 0;
}