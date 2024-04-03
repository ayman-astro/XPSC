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
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }
        map<int, int> freq;
        int mx = 0;
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            freq[a[i][0]]++;
            if (freq[a[i][0]] > mx)
            {
                mx = freq[a[i][0]];
                m = a[i][0];
            }
        }
        cout << m << " ";
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != m)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    cout << a[i][j] << " ";
                }
                break;
            }
        }
        cout << endl;
    }

    return 0;
}