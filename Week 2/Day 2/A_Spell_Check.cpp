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
        map<char, int> freq;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            freq[c]++;
        }
        if (n == 5 and freq['T'] and freq['i'] and freq['m'] and freq['u'] and freq['r'])
        {
            flag = true;
        }
        flag ? cout << "YES" nl : cout << "NO" nl;
    }

    return 0;
}