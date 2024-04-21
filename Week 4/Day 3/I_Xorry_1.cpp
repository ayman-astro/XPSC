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
        int a = 0, b = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (n & (1 << i))
            {
                a |= (1 << i);
                break;
            }
        }
        b = n ^ a;
        cout << min(a, b) << " " << max(a, b) << endl;
    }

    return 0;
}