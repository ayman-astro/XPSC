#include <bits/stdc++.h>
#define nl cout << "\n"
using namespace std;
const int maxN = 1 << 15;
vector<int> all_palindromes;
void mark_palindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.size();
        bool isPalindrome = true;
        for (int j = 0; j < len / 2; j++)
        {
            if (s[j] != s[len - 1 - j])
            {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome)
        {
            all_palindromes.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> freq(maxN), a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            freq[val]++;
            a.push_back(val);
        }
        long long int count = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < all_palindromes.size(); j++)
            {
                int cur = a[i] ^ all_palindromes[j];
                count += freq[cur];
            }
        }
        cout << count / 2;
        nl;
    }

    return 0;
}