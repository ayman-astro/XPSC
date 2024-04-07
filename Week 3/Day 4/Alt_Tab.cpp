#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> s(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string ans;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 1)
        {
            ans += s[i].substr(s[i].size() - 2, 2);
        }
    }
    cout << ans nl;

    return 0;
}