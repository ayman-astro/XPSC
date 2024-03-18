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
        int count = 0;
        int k = 1;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            if (val > k)
            {
                count += val - k;
                k = val + 1;
            }
            else
            {
                k++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}