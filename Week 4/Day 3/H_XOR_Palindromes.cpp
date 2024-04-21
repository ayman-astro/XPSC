#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        int g = 0, b = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                g += 2;
            }
            else
            {
                b++;
            }
            l++;
            r--;
        }
        vector<int> v;
        for (int i = 0; i <= n; i++)
        {
            int rm = i - b;
            if (rm < 0)
            {
                v.push_back(0);
                continue;
            }
            rm = max(rm - g, rm % 2);
            rm = max(0, rm - (n % 2));
            if (rm == 0)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        for (int val : v)
        {
            cout << val;
        }
        cout << endl;
    }

    return 0;
}