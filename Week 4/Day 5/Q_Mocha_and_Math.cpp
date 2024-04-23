#include <bits/stdc++.h>
#define endl "\n"
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
        int AND = -1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            AND &= val;
        }
        cout << AND << endl;
    }

    return 0;
}