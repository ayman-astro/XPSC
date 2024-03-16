#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    int sz = n.size();
    if (sz != 4)
    {
        reverse(n.begin(), n.end());
        sz = 4 - sz;
        while (sz--)
        {
            n += '0';
        }
        reverse(n.begin(), n.end());
    }
    cout << n << "\n";
    return 0;
}