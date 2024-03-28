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
        vector<char> a;
        map<char, int> freq;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            a.push_back(c);
            freq[c]++;
        }
        int count = 0;
        for (pair<char, int> it : freq)
        {
            if (it.second % 2)
            {
                count++;
            }
        }
        if (count - k <= 1)
        {
            cout << "YES" nl;
        }
        else
        {
            cout << "NO" nl;
        }
    }

    return 0;
}