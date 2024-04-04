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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int val = a[i];
            if (freq[val])
            {
                count++;
                while (freq[val])
                {
                    freq[val]--;
                    val++;
                }
            }
        }
        cout << count nl;
    }

    return 0;
}