#include <bits/stdc++.h>
using namespace std;
int dp[3][10005];
bool subset_sum(int n, int a[], int w)
{
    if (n == 0)
    {
        if (w == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (a[n - 1] <= w)
    {
        bool op1 = subset_sum(n, a, w - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, w);
        return dp[n][w] = op1 or op2;
    }
    else
    {
        return dp[n][w] = subset_sum(n - 1, a, w);
    }
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int val[2], w;
    cin >> val[0] >> val[1] >> w;
    memset(dp, -1, sizeof(dp));
    bool flag = subset_sum(2, val, w);
    flag ? cout << "Yes\n" : cout << "No\n";
    return 0;
}