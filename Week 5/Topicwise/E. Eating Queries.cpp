#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end(), greater<int>());
        
        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }

        while (q--)
        {
            int x;
            cin >> x;
            auto ans = lower_bound(a.begin(), a.end(), x);
            if (ans == a.end())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ans - a.begin() + 1 << endl;
            }
        }
    }

    return 0;
}
