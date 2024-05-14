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
        int key;
        cin >> key;

        int l = 0, r = n - 1, ind = -1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key == a[mid])
            {
                ind = mid;
                break;
            }
            else if (key < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (ind == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}