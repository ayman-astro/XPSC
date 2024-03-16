#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char ch = 'a';
    for (char c : s)
    {
        if (ch == c)
        {
            ch++;
        }
    }
    ch > 'z' ? cout << "None"
                    << "\n"
             : cout << ch << "\n";
    return 0;
}