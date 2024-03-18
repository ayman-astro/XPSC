#include <bits/stdc++.h>
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
        map<string, int> mp1, mp2, mp3;
        set<string> s;
        for (int i = 0; i < n; i++)
        {
            string word;
            cin >> word;
            mp1[word]++;
            s.insert(word);
        }
        for (int i = 0; i < n; i++)
        {
            string word;
            cin >> word;
            mp2[word]++;
            s.insert(word);
        }
        for (int i = 0; i < n; i++)
        {
            string word;
            cin >> word;
            mp3[word]++;
            s.insert(word);
        }
        int pt1 = 0, pt2 = 0, pt3 = 0;
        for (string word : s)
        {
            int p1 = mp1[word];
            int p2 = mp2[word];
            int p3 = mp3[word];
            if (p1 == 1 and p2 == 0 and p3 == 0)
            {
                pt1 += 3;
            }
            else if (p2 == 1 and p1 == 0 and p3 == 0)
            {
                pt2 += 3;
            }
            else if (p3 == 1 and p1 == 0 and p2 == 0)
            {
                pt3 += 3;
            }
            else if (p1 == 1 and p2 == 1 and p3 == 0)
            {
                pt1 += 1;
                pt2 += 1;
            }
            else if (p1 == 0 and p2 == 1 and p3 == 1)
            {
                pt2 += 1;
                pt3 += 1;
            }
            else if (p1 == 1 and p2 == 0 and p3 == 1)
            {
                pt1 += 1;
                pt3 += 1;
            }
        }
        cout << pt1 << " " << pt2 << " " << pt3 << "\n";
    }

    return 0;
}