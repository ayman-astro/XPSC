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
        int open = 0, close = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '(')
            {
                open++;
            }
            else
            {
                if (open)
                {
                    open--;
                }
                else
                {
                    close++;
                }
            }
        }
        cout << open nl;
    }

    return 0;
}