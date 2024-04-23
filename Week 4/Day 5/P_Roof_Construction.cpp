#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int MSB(int x)
{
    return log2(x);
}
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
        if (n == 2)
        {
            cout << 0 << " " << 1 << endl;
            continue;
        }
        int cur = n - 1;
        while (cur > 1)
        {
            cout << cur << " ";
            if (MSB(cur) != MSB(cur - 1))
            {
                break;
            }
            cur--;
        }
        for (int i = 0; i < cur; i++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}