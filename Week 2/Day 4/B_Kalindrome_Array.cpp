#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;
int a, b;
bool palindrome(vector<int> v)
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] != v[j])
        {
            a = v[i];
            b = v[j];
            return false;
        }
        i++;
        j--;
    }
    return true;
}
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        bool flag = palindrome(v);
        if (flag)
        {
            cout << "YES" nl;
        }
        else
        {
            vector<int> v1, v2;
            for (int val : v)
            {
                if (val != a)
                {
                    v1.push_back(val);
                }
                if (val != b)
                {
                    v2.push_back(val);
                }
            }
            if (palindrome(v1) or palindrome(v2))
            {
                cout << "YES" nl;
            }
            else
            {
                cout << "NO" nl;
            }
        }
    }

    return 0;
}