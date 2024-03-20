vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
        int l = 0, r = k - 1;
        vector<long long> v;
        int i = 0;
        while (r < n)
        {
            while (i < l)
            {
                i++;
            }
            while (true)
            {
                if (a[i] < 0)
                {
                    v.push_back(a[i]);
                    break;
                }
                else
                {
                    i++;
                }
                if (i > r)
                {
                    v.push_back(0);
                    break;
                }
            }
            l++;
            r++;
        }
        return v;
 }