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
        list<char> l;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c >= 'A' && c <= 'Z')
            {
                c = c + 32;
            }
            l.push_back(c);
        }
        l.unique();
        string word;
        for (char c : l)
        {
            word += c;
            // cout << c;
        }
        string cat = "meow";
        cat == word ? cout << "YES" nl : cout << "NO" nl;
    }

    return 0;
}