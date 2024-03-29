class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int l = 0, r = 0, count = -1;
        map<char, int> freq;

        while (r < s.size())
        {
            freq[s[r]]++;
            while (freq.size() > k)
            {
                freq[s[l]]--;
                if (freq[s[l]] == 0)
                {
                    freq.erase(s[l]);
                }
                l++;
            }
            if (freq.size() == k)
            {
                count = max(count, r - l + 1);
            }
            r++;
        }

        return count;
    }
};