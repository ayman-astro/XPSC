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
        long long int n;
        cin >> n;
        long long int sum = 0;
        while (n > 0)
        {
            sum += n;
            n /= 2;
        }
        cout << sum nl;
    }

    return 0;
}