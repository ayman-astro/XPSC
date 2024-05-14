#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int n;
        cin >> n;
        auto it = upper_bound(a.begin(), a.end(), n);
        cout << it - a.begin() << endl;
    }

    return 0;
}