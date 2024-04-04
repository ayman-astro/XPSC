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
        int m = min(3, n);
        vector<pair<int, int>> skiing, cinema, games;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            skiing.push_back({val, i});
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            cinema.push_back({val, i});
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            games.push_back({val, i});
        }
        sort(skiing.begin(), skiing.end(), greater<pair<int, int>>());
        sort(cinema.begin(), cinema.end(), greater<pair<int, int>>());
        sort(games.begin(), games.end(), greater<pair<int, int>>());
        long long int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (skiing[i].second != cinema[j].second)
                {
                    for (int k = 0; k < m; k++)
                    {
                        if (skiing[i].second != games[k].second and
                            cinema[j].second != games[k].second)
                        {
                            long long sum = skiing[i].first + cinema[j].first + games[k].first;
                            ans = max(sum, ans);
                        }
                    }
                }
            }
        }
        cout << ans nl;
    }

    return 0;
}