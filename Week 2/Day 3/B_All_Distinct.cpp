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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        if ((n - s.size()) % 2 == 0)
        {
            cout << s.size() nl;
        }
        else
        {
            cout << s.size() - 1 nl;
        }
    }

    return 0;
}