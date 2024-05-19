#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(a.begin(), a.end());

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto left = lower_bound(a.begin(), a.end(), l);
        auto right = upper_bound(a.begin(), a.end(), r);
        cout << right - left << endl;
    }

    return 0;
}
