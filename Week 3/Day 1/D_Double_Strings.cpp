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
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            freq[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            string word;
            for (int j = 0; j < s[i].size() - 1; j++)
            {
                word += s[i][j];
                if (freq[word] != 0)
                {
                    string wordA;
                    for (int k = j + 1; k < s[i].size(); k++)
                    {
                        wordA += s[i][k];
                    }
                    if (freq[wordA] != 0)
                    {
                        flag = true;
                    }
                }
            }
            cout << flag;
        }
        cout nl;
    }

    return 0;
}