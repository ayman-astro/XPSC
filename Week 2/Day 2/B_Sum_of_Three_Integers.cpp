#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int z = s - i - j;
            if (z >= 0 and z <= k)
            {
                count++;
            }
        }
        cout nl;
    }
    cout << count nl;
    return 0;
}