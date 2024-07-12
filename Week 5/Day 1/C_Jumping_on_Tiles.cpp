#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        n = s.size();

        vector<pair<char, int>> od;

        char mn = min(s[0], s[n - 1]);
        char mx = max(s[0], s[n - 1]);

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= mn and s[i] <= mx))
            {
                od.push_back({s[i], i});
            }
        }

        sort(od.begin(), od.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });

        if (od.size() > 2)
        {
            sort(od.begin() + 1, od.begin() + od.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
        }

        vector<int> seq;

        ll moves = 0;

        seq.push_back(1);

        for (int i = 1; i < od.size(); i++)
        {
            moves += abs(od[i - 1].first - od[i].first);
            seq.push_back(od[i].second + 1);
        }

        cout << moves << " " << seq.size() << endl;

        for (auto i : seq)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
