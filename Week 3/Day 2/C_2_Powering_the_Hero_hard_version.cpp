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
        priority_queue<int> pq;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == 0 and !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(val);
            }
        }
        cout << ans nl;
    }

    return 0;
}