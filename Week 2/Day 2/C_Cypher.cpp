#include <bits/stdc++.h>
#define nl << "\n";
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            int m;
            cin >> m;
            while (m--)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    val++;
                }
                else
                {
                    val--;
                }
                if (val < 0)
                {
                    val = 9;
                }
                if (val > 9)
                {
                    val = 0;
                }
            }
            v[i] = val;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout nl;
    }

    return 0;
}