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
        string s1, s2;
        cin >> s1 >> s2;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (!(s1[i] == s2[i] or s1[i] == 'G' and s2[i] == 'B' or s2[i] == 'G' and s1[i] == 'B'))
            {
                flag = false;
            }
        }
        flag ? cout << "YES" nl : cout << "NO" nl;
    }

    return 0;
}