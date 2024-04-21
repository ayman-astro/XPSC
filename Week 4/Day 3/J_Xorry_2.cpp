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
        int i = 31, one = 0;
        int j;
        while (i >= 0)
        {
            if (n & (1 << i))
            {
                one++;
                if (one == 2)
                {
                    break;
                }
            }
            i--;
        }
        j = i;
        int count = 0;
        while (j >= 0)
        {
            if ((n & (1 << j)) == 0)
            {
                count++;
            }
            j--;
        }
        cout << (1 << count) << endl;
    }

    return 0;
}