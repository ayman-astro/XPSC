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
        string s;
        char c;
        cin >> n >> c >> s;
        s += s;
        int ans = -1;
        int count = 0;
        bool finding = false;
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == c and !finding)
            {
                finding = true;
            }
            if (finding)
            {
                count++;
            }
            if (s[i] == 'g')
            {
                ans = max(ans, count);
                count = 0;
                finding = false;
            }
        }
        cout << --ans << "\n";
    }
    return 0;
}