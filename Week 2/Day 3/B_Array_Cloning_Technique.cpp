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
        vector<int> a(n);
        map<int, int> freq;
        int most = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            most = max(most, freq[a[i]]);
        }

        int count = 0;

        while (most < n)
        {
            count++;
            if (most >= n - most)
            {
                count += n - most;
            }
            else
            {
                count += most;
            }
            most *= 2;
        }
        cout << count nl;
    }

    return 0;
}