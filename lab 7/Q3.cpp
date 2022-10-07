
#include <bits/stdc++.h>;
class Solution
{
public:
    vector<int> beautifulArray(int n1)
    {
        vector<int> v = {1};
        while (res.size() < n1)
        {
            vector<int> v1;
            for (auto x : v)
            {
                if (x * 2 - 1 <= n1)
                    v1.push_back(x * 2 - 1);
            }
            for (auto x : v)
            {
                if (x * 2 <= n1)
                    v1.push_back(x * 2);
            }
            v = v1;
        }
        return v;
    }
};