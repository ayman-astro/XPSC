class Solution
{
public:
    int search(string pat, string txt)
    {
        int n = txt.size(), k = pat.size();
        int l = 0, r = 0;
        int count = 0;
        map<char, int> freq, mp;
        for (char c : pat)
        {
            freq[c]++;
        }
        while (r < n)
        {
            mp[txt[r]]++;
            if (r - l + 1 == k)
            {
                bool flag = true;
                for (char c : pat)
                {
                    if (freq[c] != mp[c])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    count++;
                }
                mp[txt[l]]--;
                l++;
            }
            r++;
        }
        return count;
    }
};