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
        string s1, s2;
        cin >> s1 >> s2;
        char ch;
        if (s1 == s2)
        {
            ch = '=';
        }
        else
        {
            int a, b;
            int count = 1;
            for (char c : s1)
            {
                if (c == 'X')
                {
                    count++;
                }
                else if (c == 'S')
                {
                    a = count * -1;
                }
                else if (c == 'L')
                {
                    a = count * 3;
                }
                else
                {
                    a = 2;
                }
            }
            count = 1;
            for (char c : s2)
            {
                if (c == 'X')
                {
                    count++;
                }
                else if (c == 'S')
                {
                    b = count * -1;
                }
                else if (c == 'L')
                {
                    b = count * 3;
                }
                else
                {
                    b = 2;
                }
            }
            if (a > b)
            {
                ch = '>';
            }
            else
            {
                ch = '<';
            }
        }
        cout << ch nl;
    }

    return 0;
}