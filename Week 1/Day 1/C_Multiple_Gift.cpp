#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int x, y;
    cin >> x >> y;
    int count = 0;
    while (true)
    {
        if (x <= y)
        {
            count++;
            x *= 2;
        }
        else
        {
            break;
        }
    }
    cout << count << "\n";
    return 0;
}