#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 1;
    for (int i = 1; i <= 1000; i++)
    {
        ans = c * i;
        if (ans >= a and ans <= b)
        {
            break;
        }
        if (ans > b)
        {
            ans = -1;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}