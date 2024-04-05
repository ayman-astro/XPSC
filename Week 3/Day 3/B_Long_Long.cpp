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
        int count = 0;
        long long int sum = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
            {
                flag = true;
            }
            else if (flag and val < 0)
            {
                count++;
                flag = false;
            }
            sum += abs(val);
        }
        cout << sum << " " << count nl;
    }

    return 0;
}