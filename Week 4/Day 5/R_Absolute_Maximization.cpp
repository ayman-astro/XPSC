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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn = a[0];
        int mx = a[0];
        for (int i = 1; i < n; i++)
        {
            mx |= a[i];
            mn &= a[i];
        }
        cout << mx - mn << endl;
    }

    return 0;
}