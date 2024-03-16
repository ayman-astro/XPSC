#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int t = 2;
    while (t--)
    {
        if (a > b)
        {
            ans += a;
            a--;
        }
        else
        {
            ans += b;
            b--;
        }
    }
    cout << ans << "\n";
    return 0;
}